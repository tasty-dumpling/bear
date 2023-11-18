#pragma once
#include "project0326.h"

void  CHAP8_Q7(void) { 
	// Monte Carlo 시뮬레이션, 컴퓨터가 동전을 던지고 사용자는 앞뒤를 맞춘다. 
	// 짝수이면 동전의 앞면, 홀수이면 동전의 뒷면
	srand((unsigned)time(NULL));
	int correct = 0, discorrect = 0;

	while (true) {
		int coin = rand() % 2;
		int user;

		printf("앞은 0 뒤는 1을 종료는 -1을 입력하세요.\n");
		scanf_s("%d", &user);

		if (user == -1) { break; }
		else if (user == coin) {
			printf("맞췄습니다.\n");
			correct++;}
		else{
			printf("틀렸습니다.\n");
			discorrect++;}	
		printf("\n");}

	printf("맞춘 횟수: %d\n", correct);
	printf("틀린 횟수: %d\n", discorrect);

}

void CHAP8_Q8(void) { // A와 B의 주사위 게임
	srand((unsigned)time(NULL));
	//A의 주사위
	int A1, A2, A3;
	A1 = rand() % 6 + 1;
	A2 = rand() % 6 + 1;
	A3 = rand() % 6 + 1;
	printf("A의 주사위 숫자는 %d %d %d\n", A1, A2, A3);

	int B1, B2, B3;
	B1 = rand() % 6 + 1;
	B2 = rand() % 6 + 1;
	B3 = rand() % 6 + 1;
	printf("B의 주사위 숫자는 %d %d %d\n", B1, B2, B3);

	if ((A1 + A2 + A3) > (B1 + B2 + B3)) printf("A의 승리");
	else if ((A1 + A2 + A3) == (B1 + B2 + B3)) printf("무승부");
	else printf("B의 승리");
}
