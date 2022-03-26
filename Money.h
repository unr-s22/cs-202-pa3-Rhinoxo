//
// Created by Justin Orner
// Last edited: 03/26/21
//
#ifndef CS202_PA3_MONEY_H
#define CS202_PA3_MONEY_H

#include <iostream>

class Money {
	int dollars;
	int cents;
public:
	Money(int dollars, int cents);
	Money();

	int getDollars();
	int getCents();

	friend std::ostream& operator<< (std::ostream&, const Money&);
	
	bool operator<(const Money& rhm);
	bool operator>(const Money& rhm);
	bool operator==(const Money& rhm);
	bool operator!=(const Money& rhm);
	bool operator<=(const Money& rhm);
	bool operator>=(const Money& rhm);

	Money operator+(const Money& rhm);
	Money operator-(const Money& rhm);
};

#endif