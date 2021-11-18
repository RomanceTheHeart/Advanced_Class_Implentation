#include <iostream>
#include "Header_Files/Account.h"


Account::Account()
{
WithdrawAmount=0; 
DepositAmount= 0;
}
Account::~Account()
{

}

void Account::Deposit(double amount)
{
     
    std::cout << "Account deposit called with this amount: " << amount << std::endl;  
}

void Account::Withdraw(double amount)
{

    
    std::cout << "Account withdraw called with " << amount << std::endl;;

}