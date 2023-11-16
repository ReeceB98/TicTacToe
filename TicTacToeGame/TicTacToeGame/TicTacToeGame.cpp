// TicTacToeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

void playersTurn();

int main()
{
    playersTurn();
}

void playersTurn()
{
    bool gameOver = false;
    bool isPlayer1 = true;
    bool isPlayer2 = false;
    int turnAmount = 0;

    // This will keep looping until game is over
    while (!gameOver)
    {
        // Turn change conditions between player 1 & 2
        if (isPlayer1)
        {
            std::cout << "Turn: Player 1\n";
            isPlayer1 = false;
            isPlayer2 = true;
        }
        else if (isPlayer2)
        {
            std::cout << "Turn: Player 2\n";
            isPlayer1 = true;
            isPlayer2 = false;
        }
        else
        {
            std::cout << "Something went wrong in the turn change!\n";
        }
        
        // Turn amount will increase after every turn taken to end the game.
        turnAmount++;

        // If the turn amount has reach the max turns end the game.
        if (turnAmount > 7)
        {
            gameOver = true;
        }
    }
}



