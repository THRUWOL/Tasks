#include <iostream>

using namespace std;

int main(){
    // добавление отображения русского языка
    setlocale (LC_ALL, "rus");

    struct Maze{
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
            };

        char Turn;
    };

    Maze m;

    // вывод лабиринта
    for (int i = 0; i < 25 ; i++){
        if (i == x) {
            m.maze[i] = "0";
        }
        cout << m.maze[i] << endl;
    }

    return 0;
}
