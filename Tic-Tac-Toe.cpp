// Write a program for Tic Tac Toe in cpp.

#include <bits/stdc++.h>
using namespace std ;

char board[3][3] = {

    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

void gameBoard() {

    cout << endl ;
    cout << "   |   |   " << endl;
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    cout << "   |   |   " << endl << endl ;
}

void checkWinner( char& winner) {

    //  finding winner in 3 rows 
    for( int i=0 ; i<3 ; i++) {
        if( board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]  ) {
            winner = board[i][0];
            break ;
        }
    }

    //  finding winner in 3 columns 
    for( int i=0 ; i<3 ; i++) {
        if( board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]  ) {
            winner = board[i][0];
            break ;
        }
    }

    // finding winner in diagonal
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        winner = board[0][0];
    }
    else if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        winner = board[0][2];
    }
}

void takingInputs( int& row , int& col) {

    while(true) {
        cout << "Enter row and column number from 1 to 3 : ";
        cin >> row >> col;

        if (row < 1 || row > 3 || col < 1 || col > 3) {
            cout << "Invalid input, try again." << endl;
        }
        else if (board[row-1][col-1] != ' ') {
            cout << "Tile is full, try again." << endl;
        }
        else {
            break;
        }
    
        
        //reset values
        row = -1, col = -1;
    }
}

void updateBoardAndSwapPlayer( int& row , int& col , char playerX , char playerO , char& currentPlayer) {
    board[row-1][col-1] = currentPlayer ;
    currentPlayer = (currentPlayer == playerO) ? playerX : playerO ;
}

int main()
{
    cout << endl << "_______________________________________" << endl << endl ;    

    const char playerX = 'X';
    const char playerO = 'O';

    int row = -1;
    int col = -1 ;

    char currentPlayer = playerX;
    char winner = ' ' ;

    for( int i=1 ; i<=9 ; i++) {

        gameBoard() ;

        if( winner != ' ') {
            break;
        }
        
        takingInputs(row,col);
        updateBoardAndSwapPlayer(row , col , playerX , playerO , currentPlayer) ;
        checkWinner(winner) ;            
    }

    if (winner != ' ') {
       cout << "Player" << winner << " is the winner!" << endl;
    }
    else {
        cout << "Tie!" << endl;
    } 

    cout << endl << "_______________________________________" << endl << endl ; 

    return 0 ;
}