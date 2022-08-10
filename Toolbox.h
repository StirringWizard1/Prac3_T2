#ifndef TOOLBOX_H
#define TOOLBOX_H

#include <iostream>
#include "Computer.h"


class Toolbox : public Computer
{
private: 
	char CMove; 
public:
	Toolbox();
	void makeMove(); 
	char Check();
	

};
#endif