#ifndef CRESCENDO_H
#define CRESCENDO_H

#include <iostream>
#include "Computer.h"


class Crescendo : public Computer
{
private: 
	char CMove; 
public:
	Crescendo();
	void makeMove(); 
	

};
#endif