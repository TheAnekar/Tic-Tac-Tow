#include "Board.h"
#include <iostream>
using namespace std;

char board[3][3];

void resetBoard(){
    for (int i = 0;i<3;++i){
        for (int j = 0; j < 3; ++j){
            board[i][j] = ' ';
        }
    }
}
void displayBoard(){
    cout << "\n";
    for (int i = 0; i < 3; ++i){
        cout << " ";
        for (int j; j < 3;++j){
            cout << board[i][j];
            if (j<2){
                cout << " | ";
            }
            
        }
        cout << "\n";
        if (i < 2){
            cout << "---+---+---\n";
        }
    }
    cout << "\n";
}