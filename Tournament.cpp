#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Tournament.h"
#include "Referee.h"
#include <array>



Tournament::Tournament()
{}


Player * Tournament::run(std::array<Player *, 8> PlayerArray)
{
int section = 8;
 

int Test;


for (int T = 0; T < 3; T ++)
{
	int J = 0;
	for (int I = 0; I < section; I= I+ 2, J++)
	{
		PlayerArray[I]->Reset(); 
		PlayerArray[I+1]->Reset();
		int score=0;
		for (int Round = 1; Round <= 5; Round++)
		{

			Referee Chad;
			char hi = Chad.refGame(PlayerArray[I], PlayerArray[I+1]);
			if (hi == 'W')
			{
				score++;
			}
			else if (hi == 'L')
			{
				score--;
			}
			
			PlayerArray[I]->increment(); 
			PlayerArray[I+1]->increment();
			 




		}


		if (score >= 0)
		{
			
			PlayerArray[J] =PlayerArray[I];
		}
		else if (score < 0)
		{
			
			PlayerArray[J] =PlayerArray[I+1];
		}




	}





	if (T==0)
	{
		section =4;
	}
	if (T == 1)
	{
		section = 1;
	}
} 
return PlayerArray[0];
}