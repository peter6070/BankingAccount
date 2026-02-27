/*
* File: BankingCommonDecl.h
* Writer: KJ
* Update Info: [2026.2.27.] ver 1.1
* 예금된 금액보다 많은 금액 출금을 요구하는 예외상황 처리
* 입출금 진행 시 프로그램 사용자로부터 0보다 작은 값이 입력되는 예외상황 처리
*
*/

#pragma once

//입출금 진행 시 프로그램 사용자로부터 0보다 작은 값이 입력되는 예외상황 처리
class MinusException {
private:
	int money;
public:
	MinusException(int n) : money(n) {}
	void ShowExceptionInfo() const {
		cout << "Deposit/Withdrawal " << money << " is unvalid" << endl;
	}
};

//예금된 금액보다 많은 금액 출금을 요구하는 예외상황 처리
class InsuffException {
private:
	int balance;
	int reqval;
public:
	InsuffException(int val, int req): balance(val), reqval(req){}
	void ShowExceptionInfo() const {
		cout << "You must have more than "<< reqval - balance <<" in your balance" << endl;
	}
};