#ifndef AUXIL_H
#define AUXIL_H

class Budget;      // foward decleration of the Budget class

class AuxiliaryOffice {
private:
	double auxBudget;
public:
	AuxiliaryOffice()
	{
		auxBudget = 0;
	}

	double getDivisionBudget() const
	{
		return auxBudget;
	}

	void addBudget(double, Budget&);
};

#endif