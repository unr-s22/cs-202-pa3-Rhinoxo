#include <iostream>
#include "Money.h"
#include "Account.h"

int main(){

	//Debug
	Money mymoney(100,93);

	std::cout << "My Money: " << mymoney << std::endl;

	Money yourmoney(18,970);

	std::cout << "Your Money: " << yourmoney << std::endl;

	std::cout << (mymoney - yourmoney) << std::endl;
	std::cout << (mymoney + yourmoney) << std::endl;

	std::cout << (mymoney > yourmoney) << std::endl;

	Money hismoney(100,63);

	std::cout << (mymoney > hismoney) << std::endl;

	//Program

	Account account(Money(300,23));

	std::cout << account << std::endl;

	account.makeDeposit(Money(200,00));
	account.makeDeposit(Money(300,24));
	account.makeDeposit(Money(501,22));

	std::cout << account << std::endl;

	account.makeWithdrawl(Money(300,10));
	account.makeWithdrawl(Money(201,34));

	std::cout << account << std::endl;

	return 0;
}