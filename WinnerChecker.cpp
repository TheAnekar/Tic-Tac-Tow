#include "WinnerChecker.h"
#include "Board.h"
#include <iostream>
using namespace std;

bool WinChecker(char player){
    for (int i = 0; i < 3;i++){
        if ((board[i][0] == player && board[i][1]== player && board[i][2] == player) ||(board[0][i] == player && board[1][i] == player && board[2][i] == player)){
            return true;
        }
    }    

    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || (board[0][2] == player && board[1][1] == player && board[2][0] == player)){
        return true;
    }
    return false;
}    

bool DrawChecker(){
    for (int i =0;i<3;++i){
        for (int j = 0;j<3;++j){
            if (board[i][j]==' '){
                return false;
            }
        }
    }
    return true;
}