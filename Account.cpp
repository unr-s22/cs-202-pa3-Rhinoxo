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

Money Account::calcBalance(){
    if (flag==1) {
        Money totalDeposit = std::accumulate(deposit.begin(),deposit.end(), money);
        Money totalWithdrawal = std::accumulate(withdrawal.begin(),withdrawal.end(),money);
        Money finalBalance = initBalance - (totalDeposit - totalWithdrawal);

    }
    else {
        flag=0;
        return;
    }
}

void numExchange(const vector<int> &vect) {
     for(int i=0; i < vect.size(); i++) {
        os << "("<<i++<< ")"<<vect[i] << std::endl;
    }
}

friend std::ostream& operator<< (std::ostream& os, const Account& acc) {
    std::cout<<"Account Details"<< "\n--------------------------" << "\nCurrent Balance: " << acc.calcBalance(); << std::endl; 
    std::cout << "\n--------------------------" << "\nNumber of Deposits: " << acc.deposit.size();
    std::cout << "--------------------" << std::endl;
    std::cout << numExchange(deposit);
    std::cout << "\n--------------------------" << "\nNumber of Withdrawals: " << acc.withdrawal.size();
    std::cout << "\n--------------------------" << "\n(1) " << 
}