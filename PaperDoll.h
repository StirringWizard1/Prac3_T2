#ifndef PAPERDOLL_H
#define PAPERDOLL_H

#include <iostream>
#include "Computer.h"


class PaperDoll : public Computer
{
private: 
	char CMove; 
public:
	PaperDoll();
	void makeMove(); 
	

};
#endif