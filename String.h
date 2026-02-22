#pragma once
#include "BankingCommonDecl.h"

class String {
private:
	int len;
	char* str;
public:
	String();
	String(const char* ref);
	String(const String& ref);
	~String();
	String& operator=(const String& ref);
	String& operator+=(const String& ref);
	bool operator==(const String& ref);
	String operator+(const String& ref);

	//<< 연산자 오버로딩
	friend ostream& operator<<(ostream& os, const String& ref);
	//>> 연산자 오버로딩
	friend istream& operator>>(istream& is, String& ref);
};