#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//계좌 관리 프로그램 0.8
// 1. 대입 연산자 깊은복사 정의
// 2. 중복 체크 포인터 배열 클래스 정의

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