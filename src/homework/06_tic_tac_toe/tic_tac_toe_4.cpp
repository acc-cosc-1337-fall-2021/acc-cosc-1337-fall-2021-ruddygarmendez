#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/




/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/


#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;



bool TicTacToe4::check_column_win(){

    if (TicTacToe::pegs[0]=="X" && TicTacToe::pegs[4]=="X" && TicTacToe::pegs[8]=="X" && TicTacToe::pegs[12]=="X"){
        return true;
    }
    else if (TicTacToe::pegs[0]=="O" && TicTacToe::pegs[4]=="O" && TicTacToe::pegs[8]=="O" && TicTacToe::pegs[12]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[1]=="O" && TicTacToe::pegs[5]=="O" && TicTacToe::pegs[9]=="O" && TicTacToe::pegs[13]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[1]=="X" && TicTacToe::pegs[5]=="X" && TicTacToe::pegs[9]=="X" && TicTacToe::pegs[13]=="X"){
        return true;
    }
    else if (TicTacToe::pegs[2]=="O" && TicTacToe::pegs[6]=="O" && TicTacToe::pegs[10]=="O" && TicTacToe::pegs[14]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[2]=="X" && TicTacToe::pegs[6]=="X" && TicTacToe::pegs[10]=="X" && TicTacToe::pegs[14]=="X"){
        return true;
    }
    else if (TicTacToe::pegs[3]=="O" && TicTacToe::pegs[7]=="O" && TicTacToe::pegs[11]=="O" && TicTacToe::pegs[15]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[3]=="X" && TicTacToe::pegs[7]=="X" && TicTacToe::pegs[11]=="X" && TicTacToe::pegs[15]=="X"){
        return true;
    }
    
    else return false;

}




bool TicTacToe4::check_row_win(){
    if (TicTacToe::pegs[0]=="X" && TicTacToe::pegs[1]=="X" && TicTacToe::pegs[2]=="X" && TicTacToe::pegs[3]=="X" ){
        return true;
    }
    else if (TicTacToe::pegs[0]=="O" && TicTacToe::pegs[1]=="O" && TicTacToe::pegs[2]=="O" && TicTacToe::pegs[3]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[4]=="O" && TicTacToe::pegs[5]=="O" && TicTacToe::pegs[6]=="O" && TicTacToe::pegs[7]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[4]=="X" && TicTacToe::pegs[5]=="X" && TicTacToe::pegs[6]=="X" && TicTacToe::pegs[7]=="X"){
        return true;
    }
    else if (TicTacToe::pegs[8]=="O" && TicTacToe::pegs[9]=="O" && TicTacToe::pegs[10]=="O" && TicTacToe::pegs[11]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[8]=="X" && TicTacToe::pegs[9]=="X" && TicTacToe::pegs[10]=="X" && TicTacToe::pegs[11]=="X"){
        return true;
    }
    else if (TicTacToe::pegs[12]=="O" && TicTacToe::pegs[13]=="O" && TicTacToe::pegs[14]=="O" && TicTacToe::pegs[15]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[12]=="X" && TicTacToe::pegs[13]=="X" && TicTacToe::pegs[14]=="X" && TicTacToe::pegs[15]=="X"){
        return true;
    }


    else return false;
}




bool TicTacToe4::check_diagnol_win(){
    if (TicTacToe::pegs[0]=="X" && TicTacToe::pegs[5]=="X" && TicTacToe::pegs[10]=="X" && TicTacToe::pegs[15]=="X"){
        return true;
    }
    else if (TicTacToe::pegs[0]=="O" && TicTacToe::pegs[5]=="O" && TicTacToe::pegs[10]=="O" && TicTacToe::pegs[15]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[3]=="O" && TicTacToe::pegs[6]=="O" && TicTacToe::pegs[9]=="O" && TicTacToe::pegs[12]=="O"){
        return true;
    }
    else if (TicTacToe::pegs[3]=="X" && TicTacToe::pegs[6]=="X" && TicTacToe::pegs[9]=="X" && TicTacToe::pegs[12]=="X"){
        return true;
    }
 
    else return false;
}