#include "tic_tac_toe.h"
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;

std::string player;


int main() 
{
	TicTacToe game;

	cout<<"Welcome to Tic Tac Toe"<<"\n";
	std::string player_choice;

	do{
		cout<<"Please enter X or O to play the game"<<"\n";
		cout<<"Or Q to quit the game"<<"\n";
		cin>>player_choice;
		game.start_game(player_choice);

		if (player_choice=="X"||player_choice=="O"){
				
				while (game.game_over()!=true){
				int position;
				cout<<"Enter a position from 1 to 9"<<"\n";
				cin>>position;
				game.mark_board(position);
				game.display_board();
				}
		}

		else if(player_choice=="Q"){
			break;
		}

		else{
			cout<<"Invalid selection"<<"\n";
		}
		
	}while (player_choice!="Q");
	


	return 0;
}