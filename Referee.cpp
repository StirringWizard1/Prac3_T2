#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
using namespace std;

Referee:: Referee()
{

}

char Referee:: refGame(Player * Player1, Player * Player2)
{
	Player1->makeMove(); 
	Player2->makeMove();

	switch (Player2->getMove()){
			case 'R':
			if (Player1->getMove() ==  'P'){
				 return 'W'; 

							}
			else if (Player1->getMove() == 'R')
			{
				 return 'T'; 
				 	
			}
			else 
			{
				 return 'L'; 
				 	
			}
			break;
			case 'P':
			if (Player1->getMove() ==  'S'){

				 return 'W'; 
							}
			else if (Player1->getMove() ==  'P')
			{
				 return 'T';
				 	
			}
			else 
			{
				 return 'L'; 
					
			}

			break;
			case 'S':
			if (Player1->getMove() ==  'R')
			{
				return 'W';
							}
			else if (Player1->getMove() ==  'S' )
			{
				 return 'D'; 
				 	
			}
			else 
			{
				 return 'L'; 

				 	
			}

			break;
		}
		return 'F';

		

}