#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include "Player.h"
#include "Computer.h"
#include <array>
class Tournament : public Computer
{
private:

public: 
	Tournament();
	Player * run (std::array<Player *, 8> PlayerArray);

}; 
#endif
