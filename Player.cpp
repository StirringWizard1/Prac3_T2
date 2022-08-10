#include <iostream>
#include "Player.h"


Player::Player()
{}

void Player::makeMove()
{}

char Player::getMove()
{
	return move; 
}

char Player::getName()
{
	return name;
}
void Player::increment()
{
	Counter++;
	
}

void Player::Reset()
{
	Counter = 0; 
}