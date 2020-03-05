#include <iostream>

using namespace std;

string maze[25] = {
    "###B#######################",
    "# #       #   #      #    #",
    "# # # ###### #### ####### #",
    "# # # #       #   #       #",
    "#   # # ######### # ##### #",
    "# # # #   #       #     # #",
    "### ### ### ############# #",
    "# #   #     # #           #",
    "# # #   ####### ###########",
    "# # # #       # #         C",
    "# # ##### ### # # ####### #",
    "# # #     ### # #       # #",
    "#   ##### ### # ######### #",
    "######### ### #           #",
    "# ####### ### #############",
    "A           #   ###   #   #",
    "# ############# ### # # # #",
    "# ###       # # ### # # # #",
    "# ######### # # ### # # # F",
    "#       ### # #     # # # #",
    "# ######### # ##### # # # #",
    "# #######   #       #   # #",
    "# ####### ######### #######",
    "#         #########       #",
    "#######E############D######"
    }; // maze[24][26]

/*
* B = maze[0][3]    F = maze[18][26]
* C = maze[9][26]   E = maze[24][7]
* A = maze[15][0]   D = maze[24][20]
*/


void way_check(int y, int x){
    if (maze[y][x] == ' '){
        if (maze[y][x+1] == 'A' || maze[y][x+1] == 'B' || maze[y][x+1] == 'C' || maze[y][x+1] == 'D' || maze[y][x+1] == 'E'|| maze[y][x+1] == 'F') cout << maze[y][x+1];
        else if (maze [y][x+1] == ' '){
            maze[y][x] = '+';
            way_check(y, x+1);
        }
        if (maze[y][x-1] == 'A' || maze[y][x-1] == 'B' || maze[y][x-1] == 'C' || maze[y][x-1] == 'D' || maze[y][x-1] == 'E'|| maze[y][x-1] == 'F') cout << maze[y][x-1];
        else if (maze [y][x-1] == ' '){
            maze[y][x] = '+';
            way_check(y, x-1);
        }
        if (maze[y+1][x] == 'A' || maze[y+1][x] == 'B' || maze[y+1][x] == 'C' || maze[y+1][x] == 'D' || maze[y+1][x] == 'E'|| maze[y+1][x] == 'F') cout << maze[y+1][x];
        else if (maze [y+1][x] == ' '){
            maze[y][x] = '+';
            way_check(y+1, x);
        }
        if (maze[y-1][x] == 'A' || maze[y-1][x] == 'B' || maze[y-1][x] == 'C' || maze[y-1][x] == 'D' || maze[y-1][x] == 'E'|| maze[y-1][x] == 'F') cout << maze[y-1][x];
        else if (maze [y-1][x] == ' '){
            maze[y][x] = '+';
            way_check(y-1, x);
        }
    }
    else cout << "Нет выхода.";
}

int main(){
    setlocale(LC_ALL, "russian");

    int y, x; //x_max = 24. y_max = 26
    cin >> x >>y;
    if (maze[y][x] == '#') cout << "Не верные координаты.";
    else if (maze[y][x] == 'A' || maze[y][x] == 'B' || maze[y][x] == 'C' || maze[y][x] == 'D' || maze[y][x] == 'E'|| maze[y][x] == 'F') cout << maze[y][x];
    else if (x <= 24 && y <= 26) way_check(y, x);
    else cout << "Не верные координаты.";

}
