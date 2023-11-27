// TicTacToeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>

std::vector<char> gridNum = {49, 50, 51, 52, 53, 54, 55, 56, 57};
void playersTurn();
void updateGrid(bool isPlayer1, bool isPlayer2, char playersChoice);
void player1Choice(bool player1, char choice);
void player2Choice(bool player1, char choice);
bool winCondition(std::vector<char> gridNum);
void introduction();

int main()
{
    introduction();
    playersTurn();
    return 0;
}

void introduction()
{
    std::cout << "Welcome to TicTacToe Player vs Player Edition!\n";
    std::cout << "To win the game the player must match 3 in a row either vertically, horizontally, or diagonally.\n";
    std::cout << "On your turn, input the number that matches the place on the grid.\n";
    std::cout << "Player 1 will have 'X's as their counter.\n";
    std::cout << "Player 2 will have 'O's as their counter.\n";
    std::cout << "WARNING!!! If you place a counter that already has a counter placed there you will be punished by ";
    std::cout << "losing your turn so becareful when placing a counter!\n";
    std::cout << "Please enjoy the game!\n";

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
            std::cout << "Turn: Player 1\n";
            std::cout << "Please pick a space on the board that is free:";
            std::cin >> playersChoice;
            updateGrid(isPlayer1, isPlayer2, playersChoice);
            isPlayer1 = false;
            isPlayer2 = true;
        }
        else if (isPlayer2)
        {
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

        // If the turn amount has reach the max turns, it will be a draw.
        if (turnAmount > 8)
        {
            gameOver = true;
            std::cout << "It is a draw!\n";
        }

        // A player has won the game.
        if (winCondition(gridNum))
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
    player1Choice(player1, choice);

    //Player 2
    player2Choice(player2, choice);

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

bool winCondition(std::vector<char> gridNum)
{
    // Conditions for Player 1 to win the game
    if ((gridNum[0] == 'X') && (gridNum[3] == 'X') && (gridNum[6] == 'X'))
    {
        std::cout << "Congratulations Player 1! You have Won!\n";
        return true;
    }
    else if ((gridNum[2] == 'X') && (gridNum[5] == 'X') && (gridNum[8] == 'X'))
    {
        std::cout << "Congratulations Player 1! You have Won!\n";
        return true;
    }
    else if ((gridNum[1] == 'X') && (gridNum[4] == 'X') && (gridNum[7] == 'X'))
    {
        std::cout << "Congratulations Player 1! You have Won!\n";
        return true;
    }
    else if ((gridNum[0] == 'X') && (gridNum[1] == 'X') && (gridNum[2] == 'X'))
    {
        std::cout << "Congratulations Player 1! You have Won!\n";
        return true;
    }
    else if ((gridNum[3] == 'X') && (gridNum[4] == 'X') && (gridNum[5] == 'X'))
    {
        std::cout << "Congratulations Player 1! You have Won!\n";
        return true;
    }
    else if ((gridNum[6] == 'X') && (gridNum[7] == 'X') && (gridNum[8] == 'X'))
    {
        std::cout << "Congratulations Player 1! You have Won!\n";
        return true;
    }
    else if ((gridNum[6] == 'X') && (gridNum[4] == 'X') && (gridNum[2] == 'X'))
    {
        std::cout << "Congratulations Player 1! You have Won!\n";
        return true;
    }
    else if ((gridNum[0] == 'X') && (gridNum[4] == 'X') && (gridNum[8] == 'X'))
    {
        std::cout << "Congratulations Player 1! You have Won!\n";
        return true;
    }

    // Conditions for Player 2 to win the game
    if ((gridNum[0] == 'O') && (gridNum[3] == 'O') && (gridNum[6] == 'O'))
    {
        std::cout << "Congratulations Player 2! You have Won!\n";
        return true;
    }
    else if ((gridNum[2] == 'O') && (gridNum[5] == 'O') && (gridNum[8] == 'O'))
    {
        std::cout << "Congratulations Player 2! You have Won!\n";
        return true;
    }
    else if ((gridNum[1] == 'O') && (gridNum[4] == 'O') && (gridNum[7] == 'O'))
    {
        std::cout << "Congratulations Player 2! You have Won!\n";
        return true;
    }
    else if ((gridNum[0] == 'O') && (gridNum[1] == 'O') && (gridNum[2] == 'O'))
    {
        std::cout << "Congratulations Player 2! You have Won!\n";
        return true;
    }
    else if ((gridNum[3] == 'O') && (gridNum[4] == 'O') && (gridNum[5] == 'O'))
    {
        std::cout << "Congratulations Player 2! You have Won!\n";
        return true;
    }
    else if ((gridNum[6] == 'O') && (gridNum[7] == 'O') && (gridNum[8] == 'O'))
    {
        std::cout << "Congratulations Player 2! You have Won!\n";
        return true;
    }
    else if ((gridNum[6] == 'O') && (gridNum[4] == 'O') && (gridNum[2] == 'O'))
    {
        std::cout << "Congratulations Player 2! You have Won!\n";
        return true;
    }
    else if ((gridNum[0] == 'O') && (gridNum[4] == 'O') && (gridNum[8] == 'O'))
    {
        std::cout << "Congratulations Player 2! You have Won!\n";
        return true;
    }

    return false;
}

void player1Choice(bool player1, char choice)
{
    if ((player1) && (choice == 49) && (gridNum[0] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 49) && (gridNum[0] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 50) && (gridNum[1] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 50) && (gridNum[1] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 51) && (gridNum[2] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 51) && (gridNum[2] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 52) && (gridNum[3] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 52) && (gridNum[3] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 53) && (gridNum[4] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 53) && (gridNum[4] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 54) && (gridNum[5] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 54) && (gridNum[5] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 55) && (gridNum[6] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 55) && (gridNum[6] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 56) && (gridNum[7] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 56) && (gridNum[7] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 57) && (gridNum[8] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 57) && (gridNum[8] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    // A 'X' will be placed on the grid

    if (player1 && choice == 49)
    {
        gridNum[0] = 'X';
    }
    else if (player1 && choice == 50)
    {
        gridNum[1] = 'X';
    }
    else if (player1 && choice == 51)
    {
        gridNum[2] = 'X';
    }
    else if (player1 && choice == 52)
    {
        gridNum[3] = 'X';
    }
    else if (player1 && choice == 53)
    {
        gridNum[4] = 'X';
    }
    else if (player1 && choice == 54)
    {
        gridNum[5] = 'X';
    }
    else if (player1 && choice == 55)
    {
        gridNum[6] = 'X';
    }
    else if (player1 && choice == 56)
    {
        gridNum[7] = 'X';
    }
    else if (player1 && choice == 57)
    {
        gridNum[8] = 'X';
    }
    else
    {
        //std::cout << "Something went wrong!\n";
    }
}

void player2Choice(bool player2, char choice)
{
    if ((player2) && (choice == 49) && (gridNum[0] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 49) && (gridNum[0] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 50) && (gridNum[1] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 50) && (gridNum[1] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 51) && (gridNum[2] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 51) && (gridNum[2] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 52) && (gridNum[3] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 52) && (gridNum[3] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 53) && (gridNum[4] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 53) && (gridNum[4] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 54) && (gridNum[5] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 54) && (gridNum[5] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 55) && (gridNum[6] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 55) && (gridNum[6] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 56) && (gridNum[7] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 56) && (gridNum[7] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 57) && (gridNum[8] == 'X'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 57) && (gridNum[8] == 'O'))
    {
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    // An 'O' will be placed on the grid
    if (player2 && choice == 49)
    {
        gridNum[0] = 'O';
    }
    else if (player2 && (choice == 50))
    {
        gridNum[1] = 'O';
    }
    else if (player2 && choice == 51)
    {
        gridNum[2] = 'O';
    }
    else if (player2 && choice == 52)
    {
        gridNum[3] = 'O';
    }
    else if (player2 && choice == 53)
    {
        gridNum[4] = 'O';
    }
    else if (player2 && choice == 54)
    {
        gridNum[5] = 'O';
    }
    else if (player2 && choice == 55)
    {
        gridNum[6] = 'O';
    }
    else if (player2 && choice == 56)
    {
        gridNum[7] = 'O';
    }
    else if (player2 && choice == 57)
    {
        gridNum[8] = 'O';
    }
}



