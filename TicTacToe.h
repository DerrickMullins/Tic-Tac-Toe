#ifndef TICTACTOE_H 
#define TICTACTOE_H


class TicTacToe //creating class
{
private:
	char matrix[3][3];	//declaring 2D array/matrix
	char mark;					//with 3 rows and 3 columns
	

public:
	//Constructor
	TicTacToe()
	{ 
		mark='X';
		matrix[0][0]='1'; //assigning a value to each element in
		matrix[0][1]='2'; //the matrix/board
		matrix[0][2]='3'; //initially used space instead of minus
		matrix[1][0]='4'; //sign, board was not being displayed
		matrix[1][1]='5';
		matrix[1][2]='6';
		matrix[2][0]='7';
		matrix[2][1]='8';
		matrix[2][2]='9';

	} 
	void Draw();
	void Input();
	void TogglePlayer();
	bool Win();
	bool Tie();
		
};

#endif //#ifndef checks whether the given token has been 
	   //#defined earlier in the file or in an included file; if not, 
	   //it includes the code between it and the closing #else or, 
	   //if no #else is present, #endif statement.
