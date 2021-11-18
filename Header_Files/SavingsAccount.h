#pragma once 
#include <iostream>
#include "Header_files/Account.h"

class Savings_Account : public Account 
{
    public:
    Savings_Account(); 
    ~Savings_Account(); 

    void Deposit(double amount); 

    //l,/m/.m;
    void Withdraw(double amount); 

};

