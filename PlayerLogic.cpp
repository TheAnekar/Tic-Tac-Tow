#include "PlayerLogic.h"
#include "Board.h"
#include <iostream>
using namespace std;


bool Move(char player){
    int row, col;
    cout << "Player" << player << ",Enter your move (row and column:)";
    cin >> row >> col;
    row--;
    col--;

    if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' '){
        cout << "Invalid Move.\n";
        return false;

    }

    board[row][col] = player;
    return true;
}
