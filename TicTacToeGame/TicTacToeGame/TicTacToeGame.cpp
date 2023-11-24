// TicTacToeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>

std::vector<char> gridNum = {49, 50, 51, 52, 53, 54, 55, 56, 57};
void playersTurn();
void updateGrid(bool isPlayer1, bool isPlayer2, char playersChoice);
void player1Choice(bool player1, char choice);
void player2Choice(bool player1, char choice);
//char tryAgain(std::vector<char> gridNum, char choice);

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
        if (turnAmount > 20)
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

//char tryAgain(std::vector<char> gridNum, char choice)
//{
//    while ((gridNum[0] == 'X' || gridNum[0] == 'O') && (choice == 49))
//    {
//        std::cout << "Please choose another option!\n";
//        std::cin >> choice;
//        return choice;
//    }
//}

void player1Choice(bool player1, char choice)
{
    if ((player1) && (choice == 49) && (gridNum[0] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 49) && (gridNum[0] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 50) && (gridNum[1] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 50) && (gridNum[1] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 51) && (gridNum[2] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 51) && (gridNum[2] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 52) && (gridNum[3] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 52) && (gridNum[3] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 53) && (gridNum[4] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 53) && (gridNum[4] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 54) && (gridNum[5] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 54) && (gridNum[5] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 55) && (gridNum[6] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 55) && (gridNum[6] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 56) && (gridNum[7] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 56) && (gridNum[7] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 57) && (gridNum[8] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player1) && (choice == 57) && (gridNum[8] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    //

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
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 49) && (gridNum[0] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 50) && (gridNum[1] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 50) && (gridNum[1] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 51) && (gridNum[2] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 51) && (gridNum[2] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 52) && (gridNum[3] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 52) && (gridNum[3] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 53) && (gridNum[4] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 53) && (gridNum[4] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 54) && (gridNum[5] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 54) && (gridNum[5] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 55) && (gridNum[6] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 55) && (gridNum[6] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 56) && (gridNum[7] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 56) && (gridNum[7] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 57) && (gridNum[8] == 'X'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    if ((player2) && (choice == 57) && (gridNum[8] == 'O'))
    {
        //tryAgain(gridNum, choice);
        std::cout << "You chose a space unavailable, now you lose your turn!\n";
        return;
    }

    //

    // Player2
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



