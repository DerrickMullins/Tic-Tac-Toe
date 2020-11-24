#include <iostream>
#include "TicTacToe.h" //needed to include header file
using namespace std;

//Driver Program
int main()
{	
	TicTacToe game; //creating object game
	game.Draw(); //Draw initial Board

	do{
		game.Win();
		game.Tie();
		game.Input();
		game.Draw();
		game.TogglePlayer();  	
	}while(game.Win()!=true && game.Tie()!=true);//No Tie or Win
		return 0;
}
