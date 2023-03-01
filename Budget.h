#ifndef BUDGET_H
#define BUDGET_H

#include "Auxil.h"

class Budget {
private:
	static double corpBudget;     // Static member variable.
	double divisionBudget;        // Instance member variable.
public:
	Budget()
	{
		divisionBudget = 0;
	}

	void addBudget(double b)
	{
		corpBudget += b;
		divisionBudget += b;
	}

	double getDivisionBudget() const
	{
		return divisionBudget;
	}

	double getCorpBudget() const
	{
		return corpBudget;
	}

	// Static member function.
	static void mainOffice(double);

	// Friend function
	friend void AuxiliaryOffice::addBudget(double, Budget&);
};

#endif