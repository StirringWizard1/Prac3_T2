#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "Player.h"


class Human : public Player
{
private: 
	char PMove; 

public:
	Human(); 
	void makeMove();

	

	

};
#endif