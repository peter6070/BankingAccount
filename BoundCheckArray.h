/*
* File: BoundCheckArray.h
* Writer: KJ
* Update Info: [2026.2.23.] ver 1.0
* BoundCheckAccountPtrArray 클래스를 클래스 템플릿으로 정의
*
*/

#pragma once
#include "BankingCommonDecl.h"
#include "Account.h"

typedef Account* ACC_PTR;

//계좌 관리 배열
template <class T>
class BoundCheckArray {
private:
	T* arr;
	int arrlen;
	BoundCheckArray(const BoundCheckArray& arr) {}
	BoundCheckArray& operator=(const BoundCheckArray& arr) {}
public:
	BoundCheckArray(int len = MAX_CLIENT);
	T& operator[](int idx);
	T operator[](int idx) const;
	int GetArrLen() const;
	~BoundCheckArray();
};

template <class T>
BoundCheckArray<T>::BoundCheckArray(int len) : arrlen(len) {
	arr = new T[len];
}

//배열 인덱스 연산자
template <class T>
T& BoundCheckArray<T>::operator[](int idx) {
	if (idx < 0 || idx >= arrlen) {
		cout << "Array index out of bound exception" << endl;
		exit(1);
	}
	return arr[idx];
}

template <class T>
T BoundCheckArray<T>::operator[](int idx) const {
	if (idx < 0 || idx >= arrlen) {
		cout << "Array index out of bound exception" << endl;
		exit(1);
	}
	return arr[idx];
}

template <class T>
int BoundCheckArray<T>::GetArrLen() const { return arrlen; }

template <class T>
BoundCheckArray<T>::~BoundCheckArray() {
	delete[]arr;
}
