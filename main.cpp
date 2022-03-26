#include <iostream>
#include "Money.h"


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

	return 0;
}