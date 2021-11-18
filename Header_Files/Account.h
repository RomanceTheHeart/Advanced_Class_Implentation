#pragma once


class Account 
{
public:
double DepositAmount{0};
double WithdrawAmount{0}; 

Account(); 
~Account(); 

void Deposit(double amount);
void Withdraw(double amount);

};