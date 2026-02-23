//미사용 파일(계좌 관리 프로그램 0.9까지 사용)
#include "BankingCommonDecl.h"
#include "AccountArray.h"
#include "Account.h"

//계좌 관리 배열

AccountArray::AccountArray(int len) : arrlen(len) {
	arr = new ACC_PTR[len];
}
//배열 인덱스 연산자
ACC_PTR& AccountArray::operator[](int idx) {
	if (idx < 0 || idx >= arrlen) {
		cout << "Array index out of bound exception" << endl;
		exit(1);
	}
	return arr[idx];
}
ACC_PTR& AccountArray::operator[](int idx) const {
	if (idx < 0 || idx >= arrlen) {
		cout << "Array index out of bound exception" << endl;
		exit(1);
	}
	return arr[idx];
}
int AccountArray::GetArrLen() const { return arrlen; }

AccountArray::~AccountArray() {
	delete[]arr;
}