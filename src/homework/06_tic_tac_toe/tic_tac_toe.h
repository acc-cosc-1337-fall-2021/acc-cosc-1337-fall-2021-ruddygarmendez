//h

#include <iostream>
#include <string>
#include <vector>

#ifndef tictactoe_h
#define tictactoe_h

class TicTacToe
{
public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const;
    std::string get_winner();

    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game2);

    friend std::istream& operator>>(std::istream& in, TicTacToe& game2);

    TicTacToe();
    TicTacToe(int size) : pegs(size*size, ""){

    };


private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    std::string player;
    std::string winner;
    //std::vector<std::string> pegs{9," "};

    void set_winner();


protected:
    std::vector<std::string> pegs;
    bool virtual check_column_win();
    bool virtual check_row_win();
    bool virtual check_diagnol_win();
  
};

#endif