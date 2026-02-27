/*
* File: BankingCommonDecl.h
* Writer: KJ
* Update Info: [2026.2.27.] ver 1.1
* 예금된 금액보다 많은 금액 출금을 요구하는 예외상황 처리
* 입출금 진행 시 프로그램 사용자로부터 0보다 작은 값이 입력되는 예외상황 처리
*
*/

#include "BankingCommonDecl.h"
#include "Account.h"
#include "String.h"
#include "AccountException.h"

Account::Account(int myId, String nameStr, int myBalance)
	:id(myId), balance(myBalance)
{
	/*int len = strlen(nameStr) + 1;
	cusName = new char[len];
	strcpy_s(cusName, len, nameStr);*/
	cusName = nameStr;
}

//Account::Account(const Account& copy)
//	: id(copy.id), balance(copy.balance)
//{
//	/*int len = strlen(copy.cusName) + 1;
//	cusName = new char[len];
//	strcpy_s(cusName, len, copy.cusName);*/
//	cusName = copy.cusName;
//}
//
//Account& Account::operator=(const Account& ref) {
//	id = ref.id;
//	balance = ref.balance;
//
//	/*int len = strlen(ref.cusName) + 1;
//	cusName = new char[len];
//	strcpy_s(cusName, len, ref.cusName);*/
//	cusName = ref.cusName;
//
//	return *this;
//}

int Account::GetAccID() const {
	return id;
}
void Account::Deposit(int money) {
	if (money < 0)
		throw MinusException(money);
	balance += money;
}
int Account::Withdraw(int money) {
	if (money < 0)
		throw MinusException(money);
	if (balance < money)
		throw InsuffException(balance, money);
	balance -= money;

	return money;
}
void Account::ShowAccInfo() const {
	cout << "\nAccount ID: " << id << endl;
	cout << "Name: " << cusName << endl;
	cout << "Balance: " << balance << endl;
}
//Account::~Account() {
//	delete cusName;
//}