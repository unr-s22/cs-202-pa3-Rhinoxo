//
// Created by Justin Orner
// Last edited: 03/26/21
//
#include "Money.h"

Money::Money(int _dollars, int _cents){
	dollars = _dollars;
	cents = _cents;
	if(cents > 100){	// If cents is more than 100, roll over and add carry to dollars 
		dollars += (cents / 100);
		cents = cents % 100;
	}
}
Money::Money(){
	dollars = 0;
	cents = 0;
}

int Money::getDollars(){
	return dollars;
}

int Money::getCents(){
	return cents;
}

bool Money::operator<(const Money& money){
	return (dollars < money.dollars) || ((dollars == money.dollars)&&(cents < money.cents));
}

bool Money::operator>(const Money& money){
	return (dollars > money.dollars) || ((dollars == money.dollars)&&(cents > money.cents));
}

bool Money::operator==(const Money& money){
	return (dollars == money.dollars) && (cents == money.cents);
}

bool Money::operator!=(const Money& money){
	return (dollars != money.dollars) || (cents != money.cents);
}

bool Money::operator<=(const Money& money){
	return !(Money::operator>(money));
}

bool Money::operator>=(const Money& money){
	return !(Money::operator<(money));
}

Money Money::operator+(const Money& rhm){
	Money resmoney;
	resmoney.dollars = dollars + rhm.dollars;
	resmoney.cents = cents + rhm.cents;
	if(resmoney.cents >= 100){	// If cents is more than 100, roll over and add carry to dollars
		resmoney.dollars = resmoney.dollars + 1;
		resmoney.cents = resmoney.cents - 100;
	}
	return resmoney;
}

Money Money::operator-(const Money& rhm){
	Money resmoney;
	resmoney.dollars = dollars - rhm.dollars;
	resmoney.cents = cents - rhm.cents;
	if(resmoney.cents < 0){	// If cents is negative, borrow from dollars
		resmoney.dollars = resmoney.dollars - 1;
		resmoney.cents = resmoney.cents + 100;
	}
	return resmoney;
}

std::ostream& operator<< (std::ostream& os, const Money& money){
	os << "$" << money.dollars << "." << money.cents;
	return os;
}