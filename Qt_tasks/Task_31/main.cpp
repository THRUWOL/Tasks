#include <iostream>
#include <cctype>

using namespace std;

string maze[25] = {
    "###B#######################", //0
    "# #       #   #      #    #", //1
    "# # # ###### #### ####### #", //2
    "# # # #       #   #       #", //3
    "#   # # ######### # ##### #", //4
    "# # # #   #       #     # #", //5
    "### ### ### ############# #", //6
    "# #   #     # #           #", //7
    "# # #   ####### ###########", //8
    "# # # #       # #         C", //9
    "# # ##### ### # # ####### #", //10
    "# # #     ### # #       # #", //11
    "#   ##### ### # ######### #", //12
    "######### ### #           #", //13
    "# ####### ### #############", //14
    "A           #   ###   #   #", //15
    "# ############# ### # # # #", //16
    "# ###       # # ### # # # #", //17
    "# ######### # # ### # # # F", //18
    "#       ### # #     # # # #", //19
    "# ######### # ##### # # # #", //20
    "# #######   #       #   # #", //21
    "# ####### ######### #######", //22
    "#         #########       #", //23
    "#######E############D######"  //24
    }; // maze[26][24]

bool way = false;

void way_check(int y, int x){
    if (maze[y][x] == ' '){
        if (isalpha(maze[y][x+1])) cout << maze[y][x+1];
        else if (maze [y][x+1] == ' '){
            maze[y][x] = '+';
            way_check(y, x+1);
            way = true;
        }
        if (isalpha(maze[y][x-1])) cout << maze[y][x-1];
        else if (maze [y][x-1] == ' '){
            maze[y][x] = '+';
            way_check(y, x-1);
            way = true;
        }
        if (isalpha (maze[y+1][x])) cout << maze[y+1][x];
        else if (maze [y+1][x] == ' '){
            maze[y][x] = '+';
            way_check(y+1, x);
            way = true;
        }
        if (isalpha (maze[y-1][x])) cout << maze[y-1][x];
        else if (maze [y-1][x] == ' '){
            maze[y][x] = '+';
            way_check(y-1, x);
            way = true;
        }
    }
}

int main(){
    setlocale(LC_ALL, "russian");

    int y, x;
    cin >> x >> y;

    if (x > 26 || y > 24 || maze[y][x] == '#') cout << "�� ������ ����������";
    else if (isalpha (maze[y][x])) cout << maze[y][x];
    else if (x <= 26 && y <= 24) way_check(y, x);
    else cout << "�� ������ ����������.";
    if (!way) cout << "������ ���";
}
