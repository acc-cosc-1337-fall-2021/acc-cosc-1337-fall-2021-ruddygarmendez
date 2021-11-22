//h

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"

using std::unique_ptr;

#ifndef tictactoemgr_h
#define tictactoemgr_h

class TicTacToeManager
{

public:
    void save_game(unique_ptr<TicTacToe> &b);
    void get_winner_total(int& o, int& w, int& t);
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

    TicTacToeManager()=default;
    TicTacToeManager(TicTacToeData d);

    ~TicTacToeManager();

private:
    std::vector<unique_ptr<TicTacToe>> games;

    int x_win=0;
    int o_win=0;
    int ties=0;

    void update_winner_count(std::string winner);

    TicTacToeData data;

};

#endif