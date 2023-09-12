/*
****************************************************************************
* @file              : gameFunctions.h
* @author            : Amr Mohamed (amrnassareng@gmail.com)
* @brief             : declarations of gameFunctions.c
****************************************************************************
*/

#define TRUE 1

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

void rpsGame(char, char, int*, int*);
void printGameInterface(int, int);