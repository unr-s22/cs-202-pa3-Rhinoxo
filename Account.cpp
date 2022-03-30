#include "Account.h"
#include <numeric>

void Account::makeDeposit(Money money){
    deposit.push_back(money);
    flag = 1;

    //find index if vector to find most recent deposit
    /*for(int index=0; index > deposit.size(); index++) {
        std::cout << "(" << index << ")" << deposit[index] << std::endl;
    }*/
}

void Account::makeWithdrawals(Money money){
    withdrawal.push_back(money);
    flag = 1;
}

Money Account::calcBalance(Money money){
    if (flag==1) {
        auto totalDeposit = std::accumulate(deposit.begin(),deposit.end(), money);
        auto totalWithdrawal = std::accumulate(withdrawal.begin(),withdrawal.end(),money);
        auto money = totalDeposit - totalWithdrawal;

        //iffy about
        std::cout<<"Account Details"<< "\n--------------------------" << "\nCurrent Balance: " << money << std::endl; 
        std::cout << "\n--------------------------" << "\nNumber of Deposits: " << deposit.size();
        std::cout << "--------------------" << "\n(1) " << "$100.83" /*placeholder for deposit*/ << std::endl;
        std::cout << "\n--------------------------" << "\nNumber of Withdrawals: " << withdrawal.size();
        std::cout << "\n--------------------------" << "\n(1) " << "$200.44" /*placeholder for withdrawals*/ << std::endl;
        flag=0;

    }
    else {
        flag=0;
        return money;
    }
}