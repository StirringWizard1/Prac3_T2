#include <iostream>
#include <array>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"

#include "Tournament.h"
int main()
{

// Player * P1 = new Human();
// Player * P2 = new RandomComputer(); 

// Referee chad;


// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;
// std::cout << chad.refGame(P1,P2) << std::endl;

Player * P1 = new Human(); 
Player * P2 = new Avalanche();
Player * P3 = new Bureaucrat();
Player * P4 = new RandomComputer();
Player * P5 = new Toolbox();
Player * P6 = new Crescendo();
Player * P7 = new PaperDoll();
Player * P8 = new FistfullODollars(); 



std::array<Player *, 8> PlayersArray;
PlayersArray [0] = P2;
PlayersArray [1] = P3;
PlayersArray [2] = P3;
PlayersArray [3] = P5;
PlayersArray [4] = P5;
PlayersArray [5] = P6;
PlayersArray [6] = P6;
PlayersArray [7] = P8;

Tournament T1;

Player * Test = T1.run(PlayersArray);

}
//Crescendo
//Bureaucrat
//