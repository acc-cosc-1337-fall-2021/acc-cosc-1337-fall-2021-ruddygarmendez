//cpp

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout;
using std::cin;
using std::unique_ptr;

void TicTacToeManager::save_game(unique_ptr<TicTacToe> &b){
    
    update_winner_count(b->get_winner());

    games.push_back(move(b));
    
};


void TicTacToeManager::get_winner_total(int& x, int& o, int& t){
    
    x=TicTacToeManager::x_win;
    o=TicTacToeManager::o_win;
    t=TicTacToeManager::ties;
    
};



std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager){

    for (const auto& i: manager.games){

        out<<*i<<"\n";
        
    }

    return out;
};

void TicTacToeManager::update_winner_count(std::string winner){
    if (winner=="X"){
        TicTacToeManager::x_win++;
    
    }
    else if (winner=="O"){
        TicTacToeManager::o_win++;
    }
    else{
        TicTacToeManager::ties++;
    }


};



