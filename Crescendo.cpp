#include <iostream>
#include "Computer.h"
#include "Player.h"
#include "Crescendo.h"


Crescendo::Crescendo()
{}
void Crescendo::makeMove() 
{

		int checker = Counter%3; 
	
	if (checker == 0)
		{


			move = 'P'; 
			 
		}
	else if (checker == 1)
		{
			move = 'S'; 
			
		}
	else if (checker == 2)
		{
			move = 'R'; 
		}

}