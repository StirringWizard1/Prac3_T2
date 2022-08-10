#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "Computer.h"


class Bureaucrat : public Computer
{
private: 
	char CMove; 
public:
	Bureaucrat();
	void makeMove(); 
	

};
#endif