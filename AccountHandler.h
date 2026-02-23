#pragma once
#include "BankingCommonDecl.h"
#include "Account.h"
#include "AccountArray.h"

//컨트롤 클래스
class AccountHandler {
private:
	int accNum = 0; //저장된 고객수
	AccountArray accArr; //계좌정보 클래스 배열(포인터 배열)
public:
	AccountHandler();
	void PrintMenu() const;
	void MakeAccount();
	void Deposit();
	void Withdraw();
	void ShowAllAccInfo() const;
	~AccountHandler();
protected:
	void MakeNormalAccount();
	void MakeHighCreditAccount();
};
