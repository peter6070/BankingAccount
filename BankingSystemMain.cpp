/*
* File: BankingCommonDecl.h
* Writer: KJ
* Update Info: [2026.2.27.] ver 1.1
* 예금된 금액보다 많은 금액 출금을 요구하는 예외상황 처리
* 입출금 진행 시 프로그램 사용자로부터 0보다 작은 값이 입력되는 예외상황 처리
*
*/

#include "BankingCommonDecl.h"
#include "AccountHandler.h"

int main(void) {
	AccountHandler accHan;
	int selectNum = 0; //번호 선택

	while (true) {
		accHan.PrintMenu();
		cin >> selectNum;
		switch (selectNum)
		{
		case MAKE:
			accHan.MakeAccount();
			break;
		case DEPOSIT:
			accHan.Deposit();
			break;
		case WITHDRAW:
			accHan.Withdraw();
			break;
		case INQUIRE:
			accHan.ShowAllAccInfo();
			break;
		case EXIT:
			cout << "Pragram Exit" << endl;
			return 0;
		default:
			cout << "Illegal selection.." << endl;
			break;
		}
	}
	return 0;
}