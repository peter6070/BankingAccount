#pragma once
#include "Account.h"
#include "String.h"
#include "AccountException.h"

//보통예금계좌
class NormalAccount :public Account {
private:
	int interestRate; //이자율 단위 %
public:
	NormalAccount(int myId, String nameStr, int myBalance, int myInterRate)
		: Account(myId, nameStr, myBalance), interestRate(myInterRate) {
	}
	virtual void Deposit(int money) {
		if (money < 0)
			throw MinusException(money);
		Account::Deposit(money); //원금 추가
		Account::Deposit(money * (interestRate / 100.0)); //이자 추가
	}
};