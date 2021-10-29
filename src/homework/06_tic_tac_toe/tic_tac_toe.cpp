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

    if (TicTacToe::check_column_win()==true){
        set_winner();
        cout<<"GAME OVER"<<"\n";
        return true;
    }
    else if (TicTacToe::check_row_win()==true){
        set_winner();
        cout<<"GAME OVER"<<"\n";
        return true;
    }
    else if (TicTacToe::check_diagnol_win()==true){
        set_winner();
        cout<<"GAME OVER"<<"\n";
        return true;
    }

    else if (TicTacToe::check_board_full()==true){
        TicTacToe::winner="C";
        cout<<"GAME OVER"<<"\n";
        return true;
    }

    else if (TicTacToe::check_board_full()==false){
        return false;    
    }



    

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

void TicTacToe::display_board() const{

        cout<<TicTacToe::pegs[0]<<"|"<<TicTacToe::pegs[1]<<"|"<<TicTacToe::pegs[2]<<"\n";
        cout<<TicTacToe::pegs[3]<<"|"<<TicTacToe::pegs[4]<<"|"<<TicTacToe::pegs[5]<<"\n";
        cout<<TicTacToe::pegs[6]<<"|"<<TicTacToe::pegs[7]<<"|"<<TicTacToe::pegs[8]<<"\n";
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
    for (int i=0;i<=8;i++){
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

    for (int i=0; i<=8; i++){
        TicTacToe::pegs[i]=" ";
    }

}

bool TicTacToe::check_column_win(){

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




bool TicTacToe::check_row_win(){
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




bool TicTacToe::check_diagnol_win(){
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

