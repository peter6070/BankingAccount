/*
* File: BankingCommonDecl.h
* Writer: KJ
* Update Info: [2026.2.27.] ver 1.1
* 예금된 금액보다 많은 금액 출금을 요구하는 예외상황 처리
* 입출금 진행 시 프로그램 사용자로부터 0보다 작은 값이 입력되는 예외상황 처리
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