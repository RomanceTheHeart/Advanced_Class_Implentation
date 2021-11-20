#include <iostream>
#include "Header_Files/Account.h"


Account::Account()
{

}
Account::~Account()
{

}

double Account::Deposit(double amount)
{

     
    std::cout << "Account deposit called with this amount: " << amount << std::endl;  
    return Sum;
}

double Account::Withdraw(double amount)
{

    
    std::cout << "Account withdraw called with " << amount << std::endl;;
    return Sum; 
}