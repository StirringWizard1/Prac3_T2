#include <iostream>
#include "Computer.h"
#include "Player.h"
#include "PaperDoll.h"


PaperDoll::PaperDoll()
{}
void PaperDoll::makeMove()
{
	int checker = Counter%3; 
	
	if (checker == 1)
		{

			move = 'P'; 
			 
		}
	else if (checker == 2)
		{
			move = 'S'; 
			
		}
	else if (checker == 0)
		{
			move = 'S'; 
			 
		}

}