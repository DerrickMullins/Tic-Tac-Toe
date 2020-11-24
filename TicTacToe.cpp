#include <iostream>
#include "TicTacToe.h" //including header file
using namespace std;

//Prints board
void TicTacToe::Draw() 
{   
    cout << "\nTic Tac Toe v1.0\n";
    cout << endl;
    for (int i=0; i<3; i++) //outer loop iterates over each row
    {
        for (int j=0; j<3; j++) //inner loop iterates over each column
        {
            cout << matrix[i][j] << "|"; //will print as matrix 
        }                                //i=row j=column
        cout << endl; //after 1st row is printed new line
    }                 //will be added and 2nd row printed
}
//takes players input
void TicTacToe::Input() 
{
    //Variable to store input
    int a;
    //Obtain users input
    cout << "\nEnter number (1-9) for field to enter: ";
    cin >> a;
    //Marking the board
    if(a == 1)
    {
       if(matrix[0][0]=='1')//If board still reads 1 (its open)
          matrix[0][0] = mark;
       else
       {
         cout << "\nERROR:Feild already taken! Try again.\n" << endl;
         Input();
       }
    }
    else if (a == 2)
    {
      if(matrix[0][1]=='2')//If board still reads 2 (its open)
         matrix[0][1] = mark;
      else //Other wise its taken, get input again
       {
         cout << "\nERROR:Feild already taken! Try again.\n" << endl;
         Input();
       }
    }
    else if (a == 3)
    {
      if(matrix[0][2]=='3')//If board still reads 3 (its open)
         matrix[0][2] = mark;
      else
       {
         cout << "\nERROR:Feild already taken! Try again.\n" << endl;
         Input();
       }
    }
    else if (a == 4)
    {
      if(matrix[1][0]=='4')//If board still reads 4 (its open)
         matrix[1][0] = mark;
      else
       {
         cout << "\nERROR:Feild already taken! Try again.\n" << endl;
         Input();
       }
    }
    else if (a == 5)
   {
      if(matrix[1][1]=='5')//If board still reads 5 (its open)
         matrix[1][1] = mark;
      else
       {
         cout << "\nERROR:Feild already taken! Try again.\n" << endl;
         Input();
       }
    }
    else if (a == 6)
    {
      if(matrix[1][2]=='6')//If board still reads 6 (its open)
         matrix[1][2] = mark;
      else
       {
         cout << "\nERROR:Feild already taken! Try again.\n" << endl;
         Input();
       }
    }
    else if (a == 7)
    {
      if(matrix[2][0]=='7')//If board still reads 7 (its open)
         matrix[2][0] = mark;
      else
       {
         cout << "\nERROR:Feild already taken! Try again.\n" << endl;
         Input();
       }
    }
    else if (a == 8)
    {
      if(matrix[2][1]=='8')//If board still reads 8 (its open)
         matrix[2][1] = mark;
      else
       {
         cout << "\nERROR:Feild already taken! Try again.\n" << endl;
         Input();
       }
    }
    else if (a == 9)
    {
      if(matrix[2][2]=='9')//If board still reads 9 (its open)
         matrix[2][2] = mark;
      else
       {
         cout << "\nERROR:Feild already taken! Try again.\n" << endl;
         Input();
       }
    }
    else //Validate users input
        {
            cout << "\nERROR: INVALID CHOICE!\n "; //Explain error
            cin.clear();                       //Clear input
            cin.ignore(INT_MAX, '\n');         //Disgard previous input
        }
}
//sets player
void TicTacToe::TogglePlayer()
{   
    if(mark == 'X')
        mark = 'O';
    else
        mark = 'X';
}

//checks for win
bool TicTacToe::Win()
{   //Board Blue Print
    // 00 01 02
    // 10 11 12
    // 20 21 22

    //Keeps track of winner
    bool winner = false;

    // *FIRST PLAYER*
    if ((matrix[0][0] == 'X' && matrix [0][1] == 'X' && matrix[0][2] == 'X') || //1st row
       (matrix[1][0] == 'X' && matrix [1][1] == 'X' && matrix[1][2] == 'X') ||  //2nd row
       (matrix[2][0] == 'X' && matrix [2][1] == 'X' && matrix[2][2] == 'X') ||  //3rd row
       (matrix[0][0] == 'X' && matrix [1][0] == 'X' && matrix[2][0] == 'X') ||  //1st column
       (matrix[0][1] == 'X' && matrix [1][1] == 'X' && matrix[2][1] == 'X') ||  //2nd column
       (matrix[0][2] == 'X' && matrix [1][2] == 'X' && matrix[2][2] == 'X') ||  //3rd column
       (matrix[0][0] == 'X' && matrix [1][1] == 'X' && matrix[2][2] == 'X') ||  //1st diagonal
       (matrix[2][0] == 'X' && matrix [1][1] == 'X' && matrix[0][2] == 'X'))    //2nd diagonal
    {
        cout << "\nX is the winner!\n" << endl;
        winner = true;
        return winner;
    }
    // *SECOND PLAYER*
    if ((matrix[0][0] == 'O' && matrix [0][1] == 'O' && matrix[0][2] == 'O') || //1st row
       (matrix[1][0] == 'O' && matrix [1][1] == 'O' && matrix[1][2] == 'O') ||  //2nd row
       (matrix[2][0] == 'O' && matrix [2][1] == 'O' && matrix[2][2] == 'O') ||  //3rd row
       (matrix[0][0] == 'O' && matrix [1][0] == 'O' && matrix[2][0] == 'O') ||  //1st column
       (matrix[0][1] == 'O' && matrix [1][1] == 'O' && matrix[2][1] == 'O') ||  //2nd column
       (matrix[0][2] == 'O' && matrix [1][2] == 'O' && matrix[2][2] == 'O') ||  //3rd column
       (matrix[0][0] == 'O' && matrix [1][1] == 'O' && matrix[2][2] == 'O') ||  //1st diagonal
       (matrix[2][0] == 'O' && matrix [1][1] == 'O' && matrix[0][2] == 'O'))    //2nd diagonal
    {
        cout << "\nO is the winner!\n" << endl;
        winner = true;
        return winner;
    }
    return winner;
}

//Checks for tie
bool TicTacToe::Tie() 
{
    //Keeps track of tie
    bool tie = false;
    //If all off the spaces are being used the game is a tie
    if ((matrix[0][0] == 'O'|| matrix[0][0] == 'X') 
        && 
        (matrix[0][1] == 'O'|| matrix[0][1] == 'X') 
        && 
        (matrix[0][2] == 'O'|| matrix[0][2] == 'X')
        &&
        (matrix[1][0] == 'O'|| matrix[1][0] == 'X') 
        && 
        (matrix[1][1] == 'O'|| matrix[1][1] == 'X') 
        && 
        (matrix[1][2] == 'O'|| matrix[1][2] == 'X')
        &&
        (matrix[2][0] == 'O'|| matrix[2][0] == 'X') 
        && 
        (matrix[2][1] == 'O'|| matrix[2][1] == 'X') 
        && 
        (matrix[2][2] == 'O'|| matrix[2][2] == 'X'))
    {
        cout << "It's a Tie!!!" << endl;
        tie = true;
        return tie;
    }
    return tie;
}
