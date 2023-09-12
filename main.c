/**
*******************************************************************************
* @file              : main.c
* @author            : Amr Mohamed (amrnassareng@gmail.com)
* @brief             : Contains main program of rock-scissor-paper consle game
*******************************************************************************
**/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "gameFunctions.h"


int main()
{
    
    char userChoice;
    char computerChoice;
    int computerRandom;
    int userScore = 0;
    int computerScore = 0;
    int continueGame = 1; // Flag to control the game loop

    system("clear"); //clear at start

    printf("\n\t\t\t\t  Welcome to ROCK, SICCORIS and PAPER Mini Game\n");
    printf("\t\t\t\t=================================================\n");

    do {
        //refresh random number every time
        srand(time(NULL));
        //random number range from 0 to 5
        computerRandom = rand() % 9;
        
        switch(computerRandom)
        {
            //rock random values
            case 0: computerChoice = 'r'; break;
            case 4: computerChoice = 'r'; break;
            case 8: computerChoice = 'r'; break;
                
            //scissor random values
            case 1: computerChoice = 's'; break;
            case 5: computerChoice = 's'; break;
            case 6: computerChoice = 's'; break;
                
            //paper random values
            case 2: computerChoice = 'p'; break;
            case 3: computerChoice = 'p'; break;
            case 7: computerChoice = 'p'; break;
        }
        
        printf("\t\t\tEnter r for ROCK, s for SCISSOR, p for PAPER, or e for EXIT: ");
        
        //INVALID INPUT HANDLING LOOP
        while (TRUE)
        {
            scanf(" %c", &userChoice);
            
            //lower user's input character
            userChoice = tolower(userChoice);
            
            //discard other input characters
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
            
            if (userChoice == 'r' || userChoice == 's' || userChoice == 'p') {
                break;
            }
            else if (userChoice == 'e')
            {
                continueGame = 0;
                break;
            }
            else
            {
                printf("\t\t\tInvalid Input! Re-enter 'r', 's', 'p', or 'e': ");
            }
        }

        if (continueGame)
        {
            system("clear");
            rspGame(userChoice, computerChoice, &userScore, &computerScore);
        }

    } while (continueGame);

    system("clear");
    printf("\n\t\t\t\t\t\tSee you soon! :)\n");
    return 0;
}


