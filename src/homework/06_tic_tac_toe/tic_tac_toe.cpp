//cpp

#include "tic_tac_toe.h"
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;

std::string TicTacToe::get_winner(){

    return winner;
}

void TicTacToe::set_winner(){

    if (TicTacToe::player=="X"){
        TicTacToe::winner="O";
    }
    else{
        TicTacToe::winner="X";
    }
    return;

}

bool TicTacToe::game_over(){

    if (check_column_win()==true){
        set_winner();
        cout<<"GAME OVER"<<"\n";
        return true;
    }
    else if (check_row_win()==true){
        set_winner();
        cout<<"GAME OVER"<<"\n";
        return true;
    }
    else if (check_diagnol_win()==true){
        set_winner();
        cout<<"GAME OVER"<<"\n";
        return true;
    }

    else if (check_board_full()==true){
        TicTacToe::winner="C";
        cout<<"GAME OVER"<<"\n";
        return true;
    }

    return false;    
}

void TicTacToe::start_game (std::string first_player){
    
    player=first_player;
    clear_board();
    return;
}

void TicTacToe::mark_board(int position){

    TicTacToe::pegs[position-1]=player;
    set_next_player();
}

std::string TicTacToe::get_player()const {

    return player;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game2){

    if (game2.pegs.size()==9){
            
            out<<game2.pegs[0]<<"|"<<game2.pegs[1]<<"|"<<game2.pegs[2]<<"\n";
            out<<game2.pegs[3]<<"|"<<game2.pegs[4]<<"|"<<game2.pegs[5]<<"\n";
            out<<game2.pegs[6]<<"|"<<game2.pegs[7]<<"|"<<game2.pegs[8]<<"\n";

    }

    else if (game2.pegs.size()==16){
            out<<game2.pegs[0]<<"|"<<game2.pegs[1]<<"|"<<game2.pegs[2]<<"|"<<game2.pegs[3]<<"\n";
            out<<game2.pegs[4]<<"|"<<game2.pegs[5]<<"|"<<game2.pegs[6]<<"|"<<game2.pegs[7]<<"\n";
            out<<game2.pegs[8]<<"|"<<game2.pegs[9]<<"|"<<game2.pegs[10]<<"|"<<game2.pegs[11]<<"\n";
            out<<game2.pegs[12]<<"|"<<game2.pegs[13]<<"|"<<game2.pegs[14]<<"|"<<game2.pegs[15]<<"\n";

    }

        return out;
}


std::istream& operator>>(std::istream& in, TicTacToe& game2){
    int position;
	cout<<"Enter a board position to save your mark"<<"\n";
    in>>position;
    game2.mark_board(position);
				
    return in;
}


void TicTacToe::set_next_player(){
    if (TicTacToe::player=="X"){
        TicTacToe::player="O";
    }
    else{
        TicTacToe::player="X";
    }

}


bool TicTacToe::check_board_full(){
    
    int num=0;
    for (int i=0;i<pegs.size();i++){
        if (TicTacToe::pegs[i]==" "){
            num ++;
        }
    }
    if (num>=1){
        return false;
    }
    else {
        cout<<"TIE"<<"\n";
        clear_board();   
        return true;
    }
}

void TicTacToe::clear_board(){

    for (int i=0; i<pegs.size(); i++){
        pegs[i]=" ";
    }

}

bool TicTacToe::check_column_win(){
    return false;
}




bool TicTacToe::check_row_win(){
    return false;
}




bool TicTacToe::check_diagnol_win(){
    return false;
}

