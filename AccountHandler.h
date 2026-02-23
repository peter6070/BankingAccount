/*
* File: AccountHandler.h
* Writer: KJ
* Update Info: [2026.2.23.] ver 1.0
* BoundCheckAccountPtrArray 클래스를 클래스 템플릿으로 정의
*
*/

#pragma once
#include "BankingCommonDecl.h"
#include "Account.h"
#include "BoundCheckArray.h"

//컨트롤 클래스
class AccountHandler {
private:
	int accNum = 0; //저장된 고객수
	BoundCheckArray<Account*> accArr; //계좌정보 클래스 배열(포인터 배열)
	//BoundCheckArray 클래스의 자료형을 Account* 으로 하겠다는 뜻
	// BoundCheckArray accArr; 라고 하면 템플릿으로 정의된 BoundCheckArray가 어떤 자료형을 쓰는지 몰라 오류남 
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
