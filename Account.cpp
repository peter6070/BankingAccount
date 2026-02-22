#include "BankingCommonDecl.h"
#include "Account.h"
#include "String.h"

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
	balance += money;
}
int Account::Withdraw(int money) {
	if (balance < money)
		return 0;
	balance -= money;

	return balance;
}
void Account::ShowAccInfo() const {
	cout << "\nAccount ID: " << id << endl;
	cout << "Name: " << cusName << endl;
	cout << "Balance: " << balance << endl;
}
//Account::~Account() {
//	delete cusName;
//}