/**
****************************************************************************
* @file              : gameFunctions.c
* @author            : Amr Mohamed (amrnassareng@gmail.com)
* @brief             : Contains functions of rock-scissor-paper consle game
****************************************************************************
**/

#include <stdio.h>

void printGameInterface(int userScore, int compScore)
{
    printf(" SCOREBOARD\nYou:      %d\t\t\t      ROCK, SICCORIS and PAPER Mini Game\n", userScore);
    printf("Computer: %d\t\t\t    ======================================\n", compScore);
}

void rpsGame(char user, char computer, int* userScore, int* compScore)
{
    if ((user == 'r' && computer == 's') || (user == 's' && computer == 'p') || (user == 'p' && computer == 'r'))
	{
        //increment user's score by 1
        (*userScore)++;
		printGameInterface(*userScore, *compScore);
        printf("\n\t\t\tYour Choice: %c [WINNER]\n\t\t\tComputer's Choice: %c\n\n", user, computer);
    }
	else if ((user == 's' && computer == 'r') || (user == 'p' && computer == 's') || (user == 'r' && computer == 'p'))
	{
        //increment computer's score by 1
        (*compScore)++;
		printGameInterface(*userScore, *compScore);
        printf("\n\t\t\tYour Choice: %c\n\t\t\tComputer's Choice: %c [WINNER]\n\n", user, computer);
    }
	else
	{
		printGameInterface(*userScore, *compScore);
        printf("\n\t\t\tYour Choice: %c [DRAW]\n\t\t\tComputer's Choice: %c [DRAW]\n\n", user, computer);
    }
}

