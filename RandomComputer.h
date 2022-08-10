#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H

#include <iostream>
#include "Computer.h"


class RandomComputer : public Computer
{
private: 
	char CMove; 
public:
	RandomComputer();
	void makeMove(); 
	

};
#endif