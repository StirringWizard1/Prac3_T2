#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>


class Player 
{
protected:
char move;
int Counter;

char name;

public:

Player();
virtual void makeMove();
char getMove();
char getName();
	void increment();
	void Reset(); 

};
#endif 
