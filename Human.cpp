#include <iostream>
#include "Human.h"
#include "Computer.h"



Human::Human()
{}

void Human:: makeMove()
{
	std::cout << "Enter move: ";
	std::cin >> move;
}
