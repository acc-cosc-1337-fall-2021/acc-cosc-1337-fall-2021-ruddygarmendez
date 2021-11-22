//h
#include "tic_tac_toe.h"

#ifndef tictactoe3_h
#define tictactoe3_h

class TicTacToe3 : public TicTacToe{

public:
    TicTacToe3():TicTacToe(3){};

    TicTacToe3(std::vector<std::string> p, std::string win):TicTacToe(p, win){}
    

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagnol_win();


};

#endif
