/*
* File: BankingCommonDecl.h
* Writer: KJ
* Update Info: [2026.2.23.] ver 1.0
* BoundCheckAccountPtrArray 클래스를 클래스 템플릿으로 정의
* 
*/


#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//최대 고객 수
const int MAX_CLIENT = 100;

//사용자 선택 메뉴
enum {
	MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT
};

//신용등급
enum {
	LEVEL_A = 7,
	LEVEL_B = 4,
	LEVEL_C = 2
};

//계좌 종류
enum {
	NORMAL = 1,
	CREDIT = 2
};