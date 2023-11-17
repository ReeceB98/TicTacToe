// TicTacToeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>

std::vector<char> gridNum = {49, 50, 51, 52, 53, 54, 55, 56, 57};
void playersTurn();
void updateGrid();

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
            updateGrid();
            std::cout << "Turn: Player 1\n";
            isPlayer1 = false;
            isPlayer2 = true;
        }
        else if (isPlayer2)
        {
            updateGrid();
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

void updateGrid()
{
    std::cout << "   |   |   \n";
    std::cout << " " << gridNum[0] << " | " << gridNum[1] << " | " << gridNum[2] << " \n";
    std::cout << "___|___|___\n";
    std::cout << "   |   |   \n";
    std::cout << " " << gridNum[3] << " | " << gridNum[4] << " | " << gridNum[5] << " \n";
    std::cout << "___|___|___\n";
    std::cout << "   |   |   \n";
    std::cout << " " << gridNum[6] << " | " << gridNum[7] << " | " << gridNum[8] << " \n";
    std::cout << "   |   |   \n";
}



