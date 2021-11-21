#pragma once


class Account 
{


private:

	double DepositAmount{ 0 };
	double WithdrawAmount{ 0 };
	double Sum{ 0 };

public:
Account(); 
~Account();

double Deposit(double amount);
double Withdraw(double amount);
void ADDMoney();
void SubtractMoney();

};