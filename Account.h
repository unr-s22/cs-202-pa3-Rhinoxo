#ifndef CS202_PA3_ACCOUNT_H
#define CS202_PA3_ACCOUNT_H

#include <iostream>
#include <vector>
#include "Money.h"

class Account{

    std::vector<Money> deposit;
    std::vector<Money> withdrawal;
    
    Money initBalance;
    Money finalBalance;
    bool flag = 0;

public:
    Account(Money money);
    void makeDeposit(Money money);
    void makeWithdrawals(Money money);
    void calcBalance();
    friend std::ostream& operator<< (std::ostream& os, const Account& acc); 
    void numExchange(const std::vector<int> &vect);

};

#endif