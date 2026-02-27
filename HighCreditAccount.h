#pragma once
#include "NormalAccount.h"
#include "String.h"

//신용신뢰계좌
class HighCreditAccount : public NormalAccount {
private:
	int specialRate;
public:
	HighCreditAccount(int myId, String nameStr, int myBalance, int myInterRate, int special)
		: NormalAccount(myId, nameStr, myBalance, myInterRate), specialRate(special) {
	}
	virtual void Deposit(int money) {
		if (money < 0)
			throw MinusException(money);
		NormalAccount::Deposit(money); //원금, 이자 추가
		Account::Deposit(money * (specialRate / 100.0)); //특별이자 추가
	}
};