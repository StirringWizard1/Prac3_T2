#ifndef REFEREE_H
#define REFEREE_H 

#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Player.h"


class Referee
{
private: 
	
public: 
	Referee();
	char refGame(Player *, Player *);
};
#endif