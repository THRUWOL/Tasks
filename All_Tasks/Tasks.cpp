#include "Header.h"


int main()
{
    setlocale(LC_ALL, "Russian");

    int choise;
    bool ok;

    do {
        system("cls");
        cout << "Введите номер задания, чтобы программа запустила решение.\n" << "Со списком заданий можно ознакомиться введя 0.\n";
        cin >> choise;

        switch (choise) {
        case 0: list(); break;
        case 1: first(); break;
        case 2: second(); break;
        case 3: third(); break;
        case 4: fourth(); break;
        case 5: fifth(); break;
        case 6: sixth(); break;
        case 7: seventh(); break;
        case 8: eight(); break;
        case 9: ninth(); break;
        case 10: tenth(); break;
        case 11: eleventh(); break;
        case 12: twelve(); break;
        case 13: thirteenth(); break;
        case 14: fourtheenth(); break;
        case 16: sixteenth(); break;
        case 17: seventeenth(); break;
        case 18: eighteenth(); break;
        case 19: nineteenth(); break;
        case 20: twenty(); break;
        default: cout << "Советую ознакомиться со списком заданий.\n";
        }

        cout << "Для продолжения введите 1.\n";
        cin >> ok;

    } while (ok);

    return 0;
}
