#include "tic_tac_toe_3.h"

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;



bool TicTacToe3::check_column_win(){

    if (TicTacToe::pegs[0]=="X" && TicTacToe::pegs[3]=="X" && TicTacToe::pegs[6]=="X"){
        return true;
    }
    else if (TicTacToe::pegs[0]=="O" && TicTacToe::pegs[3]=="O" && TicTacToe::pegs[6]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[1]=="O" && TicTacToe::pegs[4]=="O" && TicTacToe::pegs[7]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[1]=="X" && TicTacToe::pegs[4]=="X" && TicTacToe::pegs[7]=="X"){
        return true;
    }
    else if (TicTacToe::pegs[2]=="O" && TicTacToe::pegs[5]=="O" && TicTacToe::pegs[8]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[2]=="X" && TicTacToe::pegs[5]=="X" && TicTacToe::pegs[8]=="X"){
        return true;
    }
    else return false;

}




bool TicTacToe3::check_row_win(){
    if (TicTacToe::pegs[0]=="X" && TicTacToe::pegs[1]=="X" && TicTacToe::pegs[2]=="X"){
        return true;
    }
    else if (TicTacToe::pegs[0]=="O" && TicTacToe::pegs[1]=="O" && TicTacToe::pegs[2]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[3]=="O" && TicTacToe::pegs[4]=="O" && TicTacToe::pegs[5]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[3]=="X" && TicTacToe::pegs[4]=="X" && TicTacToe::pegs[5]=="X"){
        return true;
    }
    else if (TicTacToe::pegs[6]=="O" && TicTacToe::pegs[7]=="O" && TicTacToe::pegs[8]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[6]=="X" && TicTacToe::pegs[6]=="X" && TicTacToe::pegs[8]=="X"){
        return true;
    }
    else return false;
}




bool TicTacToe3::check_diagnol_win(){
    if (TicTacToe::pegs[0]=="X" && TicTacToe::pegs[4]=="X" && TicTacToe::pegs[8]=="X"){
        return true;
    }
    else if (TicTacToe::pegs[0]=="O" && TicTacToe::pegs[4]=="O" && TicTacToe::pegs[8]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[2]=="O" && TicTacToe::pegs[4]=="O" && TicTacToe::pegs[6]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[2]=="X" && TicTacToe::pegs[4]=="X" && TicTacToe::pegs[6]=="X"){
        return true;
    }
        else return false;
}

