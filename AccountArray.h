//미사용 파일(계좌 관리 프로그램 0.9까지 사용)
#pragma once
#include "BankingCommonDecl.h"
#include "Account.h"

typedef Account* ACC_PTR;

//계좌 관리 배열
class AccountArray{
private:
	ACC_PTR* arr;
	int arrlen;
	AccountArray(const AccountArray& arr){}
	AccountArray& operator=(const AccountArray& arr){}
public:
	AccountArray(int len=MAX_CLIENT);
	ACC_PTR& operator[](int idx);
	ACC_PTR& operator[](int idx) const;
	int GetArrLen() const;
	~AccountArray();
};