#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>


using std::cout;
using std::cin;
using std::unique_ptr;
using std::make_unique;

std::string player;
std::string winner;


int main() 
{
	unique_ptr <TicTacToe> game;
	TicTacToeManager gamesession;

	cout<<"Welcome to Tic Tac Toe"<<"\n";
	std::string player_choice;
	int game_choice;
	int x, o, t;

	do{
		cout<<"Please enter 3 for TicTacToe 3x3 or 4 for TIcTacToe 4x4"<<"\n";
		cin>>game_choice;

		if (game_choice==3){
			game=make_unique <TicTacToe3>();
		}

		else if(game_choice==4){
			game=make_unique <TicTacToe4>();

		}



		cout<<"Please enter X or O to play the game"<<"\n";
		cout<<"Or Q to quit the game"<<"\n";
		cin>>player_choice;
		game->start_game(player_choice);

		if (player_choice=="X"||player_choice=="O"){
				
				while (game->game_over()!=true){
				cin>>*game;
				cout<<*game;
				}

			cout<<"Winner is "<<game->get_winner()<<"\n";

			gamesession.save_game(game);
			gamesession.get_winner_total(x, o, t);
			cout<<"O Total Wins ="<<o<<"\n";
        	cout<<"X Total Wins ="<<x<<"\n";
        	cout<<"Total Ties ="<<t<<"\n";
			cout<<"\n";
		}

		else if(player_choice=="Q"){
			break;
		}

		else{
			cout<<"Invalid selection"<<"\n";
		}
		
	}while (player_choice!="Q");

	cout<<"Thank you for playing Garmendez Tic Tac Toe\n";
   	cout<<"Here are all the games played during this session\n";
	
	cout<<gamesession;

	return 0;
}