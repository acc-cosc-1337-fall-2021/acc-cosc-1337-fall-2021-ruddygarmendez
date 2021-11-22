//h

#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include <memory>
#include <fstream>
#include <iostream>



#ifndef TICTACTOEDATA_H
#define TICTACTOEDATA_H

class  TicTacToeData {

    public:

        void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games) ;
        std::vector<std::unique_ptr<TicTacToe>> get_games();

    private:
        std::string file_name{"games.dat"};


};

#endif