#include <iostream>
#include "Computer.h"
#include "Player.h"
#include "RandomComputer.h"


RandomComputer::RandomComputer()
{}
void RandomComputer::makeMove()
{
	int Rand = rand() % 3 + 1;
	std::cout << Rand << std::endl;
	if (Rand == 1)
		{

			move = 'R'; 
			
		}
	else if (Rand == 3)
		{
			move = 'P'; 
			
		}
	else if (Rand == 2)
		{
			move = 'S'; 
			 
		}

}