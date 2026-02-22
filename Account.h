#pragma once
#include "String.h"

//Account 클래스
class Account {
	int id;
	String cusName;
	int balance;
public:
	Account(int myId, String nameStr, int myBalance);
	/*Account(const Account& copy);
	Account& operator=(const Account& ref);*/

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	//~Account();
};