#include "Account.h"
#include <numeric>

void Account::makeDeposit(Money money){
    deposit.push_back(money);
    flag = 1;
}

void Account::makeWithdrawals(Money money){
    withdrawal.push_back(money);
    flag = 1;
}

Account::Account(Money money){
    initBalance = money;
    flag = 1;
}

void Account::calcBalance(){
    if (flag==1) {
        Money totalDeposit = std::accumulate(deposit.begin(),deposit.end(), initBalance);
        Money totalWithdrawal = std::accumulate(withdrawal.begin(),withdrawal.end(), initBalance);
        finalBalance = initBalance + (totalDeposit - totalWithdrawal);
    }
    flag=0;
}

const void numExchange(const std::vector<Money> &vect) {
     for(int i=0; i < vect.size(); i++) {
        std::cout << "(" << (i+1) << ")" << vect[i] << std::endl;
    }
}

std::ostream& operator<< (std::ostream& os, const Account& acc) {
    os << "Account Details" << "\n--------------------------" << "\nCurrent Balance: " << acc.finalBalance << std::endl; 
    os << "\n--------------------------" << "\nNumber of Deposits: " << acc.deposit.size() << std::endl;
    os << "--------------------" << std::endl;
    numExchange(acc.deposit);
    os << "\n--------------------------" << "\nNumber of Withdrawals: " << acc.withdrawal.size();
    os << "\n--------------------------" << std::endl;
    numExchange(acc.withdrawal);

    return os;
}