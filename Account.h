#ifndef CS202_PA3_ACCOUNT_H
#define CS202_PA3_ACCOUNT_H

#include <iostream>
#include <vector>
#include "Money.h"

class Account: public Money{

    std::vector<Money> deposit;
    std::vector<Money> withdrawal;
    
    Money initBalance = 0;
    bool flag = 0;

public:
    Account(int dollars, int cents): Money(dollars, cents){}
    void makeDeposit(Money money);
    void makeWithdrawals(Money money);
    Money calcBalance();
    friend std::ostream& operator<< (std::ostream& os, const Account& acc); 
    void numExchange(const vector<int> &vect);

};

#endif