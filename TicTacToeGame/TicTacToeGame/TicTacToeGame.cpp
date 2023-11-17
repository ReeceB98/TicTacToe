// TicTacToeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>

std::vector<char> gridNum = {49, 50, 51, 52, 53, 54, 55, 56, 57};
void playersTurn();
void updateGrid(bool isPlayer1, bool isPlayer2, char playersChoice);
void tryAgain(std::vector<char> gridNum, char choice);

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
        char playersChoice = 0;
        
        // Turn change conditions between player 1 & 2
        if (isPlayer1)
        {
            //updateGrid();
            std::cout << "Turn: Player 1\n";
            std::cout << "Please pick a space on the board that is free:";
            std::cin >> playersChoice;
            updateGrid(isPlayer1, isPlayer2, playersChoice);
            isPlayer1 = false;
            isPlayer2 = true;
        }
        else if (isPlayer2)
        {
            //updateGrid();
            std::cout << "Turn: Player 2\n";
            std::cout << "Please pick a space on the board that is free:";
            std::cin >> playersChoice;
            updateGrid(isPlayer1, isPlayer2, playersChoice);
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

void updateGrid(bool isPlayer1, bool isPlayer2, char playersChoice)
{
    bool player1 = isPlayer1;
    bool player2 = isPlayer2;
    char choice = playersChoice;

    // Player1
    if ((player1) && (choice == 49) && (gridNum[0] == 'X'))
    {
        //std::cout << "Please choose another option!\n";
        tryAgain(gridNum, choice);
    }

    if ((player1) && (choice == 49) && (gridNum[0] == 'O'))
    {
        std::cout << "Please choose another option!\n";
    }

    if (player1 && choice == 49)
    {
        gridNum[0] = 'X';
    }

    // Player2
    if (player2 && choice == 49)
    {
        gridNum[0] = 'O';
    }

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

void tryAgain(std::vector<char> gridNum, char choice)
{
    while ((gridNum[0] == 'X' || gridNum[0] == 'O') && (choice == 49))
    {
        std::cout << "Please choose another option!\n";
        std::cin >> choice;
    }
}



