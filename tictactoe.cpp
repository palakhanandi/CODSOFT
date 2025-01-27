#include <iostream>
#include <string>
using namespace std;

int main() {
    // creating game board 
    char board[3][3] = {
        {' ', ' ', ' '}, 
        {' ', ' ', ' '}, 
        {' ', ' ', ' '}
    };

    const char playerX = 'X';
    const char playerO = 'O';
    char currentPlayer = playerX;
    int row = -1;
    int col = -1;
    char winner = ' ';

    for (int i = 0; i < 9; i++) {
        //display game board
        cout << "   |   |   " << endl;
        cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
        cout << "   |   |   " << endl;

        if (winner != ' ') {
            break;
        }

        // player input
        cout << "Current Player is " << currentPlayer << endl;
        while (true) {
            cout << "Enter row col from 0-2 for row and column: ";
            cin >> row >> col;
            if (row < 0 || row > 2 || col < 0 || col > 2) {
                cout << "Invalid input " << endl;
            }
            else if (board[row][col] != ' ') {
                cout << "Tile is full,try again please " << endl;
            }
            else {
                break;
            }
            //reset values
            row = -1;
            col = -1;
            cin.clear(); 
            cin.ignore(10000, '\n');  
            

        }

        board[row][col] = currentPlayer;
        currentPlayer = (currentPlayer == playerX) ? playerO : playerX;

        //check for win 

        //rows - horizontal
        for (int row = 0; row < 3; row++) {
            if (board[row][0] != ' ' && board[row][0] == board[row][1] && board[row][1] == board[row][2]) {
                winner = board[row][0];
                break;
            }
        }

        //columns - vertical
        for (int col = 0; col < 3; col++) {
            if (board[0][col] != ' ' && board[0][col] == board[1][col] && board[1][col] == board[2][col]) {
                winner = board[0][col];
                break;
            }
        }

        //diagonal
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
            winner = board[0][0];
        }
        else if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
            winner = board[0][2];
        }
    }

    if (winner != ' ') {
        cout << "Player" << winner << " is the winner " << endl;
    }
    else {
        cout << "It is a tie " << endl;
    }
    
    
}