#include "/home/ashraf/Documents/Tic-Tac-Toe/Board.h"
#include "PlayerLogic.h"
#include "WinnerChecker.h"
#include <iostream>
using namespace std;

int main(){
    char user = 'X';
    resetBoard();

    while (true)
    {
        displayBoard();
        if (!Move(user)){
            continue;
        }
        if(WinChecker(user)){
            displayBoard();
            cout << "Player" << user << " Wins!\n";
            break;
        }
        if (DrawChecker()){
            displayBoard();
            cout << "Its A Draw \n";
            break;
        }
        user = (user == 'X') ? 'O' : 'X';
    }
    return 0;
    
}