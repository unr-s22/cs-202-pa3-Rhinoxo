#ifndef CS202_PA3_ACCOUNT_H
#define CS202_PA3_ACCOUNT_H

#include <iostream>
#include <vector>
#include "Money.h"

class Account: public Money{

    std::vector<Money> deposit;
    std::vector<Money> withdrawal;

    bool flag = 0;
     int finalBalance = 0;


public:
    Account(int dollars, int cents): Money(dollars, cents){}
    void makeDeposit(Money money);
    void makeWithdrawals(Money money);
    Money calcBalance(Money money);

};

#endif