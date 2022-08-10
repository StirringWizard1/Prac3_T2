#ifndef AVALANCHE_H
#define AVALANCHE_H

#include <iostream>
#include "Computer.h"


class Avalanche : public Computer
{
private: 
	char CMove; 
public:
	Avalanche();
	void makeMove(); 
	

};
#endif