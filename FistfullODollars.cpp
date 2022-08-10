#include <iostream>
#include "Computer.h"
#include "Player.h"
#include "FistfullODollars.h"


FistfullODollars::FistfullODollars()
{}
void FistfullODollars::makeMove()
{
	int checker = Counter%3 ; 
		

	if (checker == 0)
		{

			move = 'R'; 

		}
	else if (checker == 1)
		{
			move = 'P'; 

		}
	else if (checker == 2)
		{
			move = 'P'; 
 
		}

}