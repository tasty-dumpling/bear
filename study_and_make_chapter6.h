#pragma once
#include "project0326.h"

void CHAP6_Q11(void) { // 중첩 반복문을 사용하여, 숫자 삼각형 출력하기
	int loop;
	printf("정수를 입력하세요.:");
	scanf_s("%d", &loop);

	for (int i = 1; i <= loop; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

}

void CHAP6_Q12(void) { // 별표로 막대그래프 그리기 1~50사이의 숫자 10개를 랜덤하게 생성하여 별표 출력
	
	srand((unsigned)time(NULL));
	
	for (int i = 0; i < 10; i++) {
		int r = rand() % 50 + 1;
		for (int j = 0; j < r; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void CHAP6_Q13(void) { // 피보나치 수열 출력하기
	int input;
	printf("몇 번째 항까지 구할까요? ");
	scanf_s("%d",&input);

	int a = 0;
	int b = 1;
	
	for (int i = 0; i <= input; i++) {
		if (i == 0)
			printf("%d, ", a);
		else{
			int tmp = a;
			a = b;
			b = a + tmp;
			printf("%d, ", a);
		}
	}
}

void CHAP6_Q14(void) { // 숫자 입력받기, 입력 받은 숫자까지의 제곱수 합을 구하기
	int input, sum = 0;
	printf("n의 값을 입력하세요.: ");
	scanf_s("%d", &input);

	for (int i = 1; i <= input; i++) {
		sum = sum + i * i;
	}

	printf("도출값: %d", sum);
}

void CHAP6_Q15(void) { // 자동차 연료상태를 알려주도록 하자
// 알려줄수 없다...
}

void CHAP6_Q16(void) { // 소수 여부를 판별해보자
	printf("멈추고 싶다면 0을 입력하세요.\n");
	while (true) {
		int input;
		printf("\n정수를 입력하세요.: ");
		scanf_s("%d", &input);
		bool prime = 1;

		if (input == 0)
			break;

		for (int i = 2; i <= input / 2; i++) {
			if (input % i == 0) prime = 0;
		}

		switch (prime) {
		case 1: printf("소수입니다.\n"); break;
		case 0: printf("소수가 아닙니다.\n"); break;
		}
	}
}

void CHAP6_Q17(void) { // 50달러로 시작, 한 판에 1달러, 따는 경우 1/2, 잃는 경우 1/2. 
	// 가진 돈이 0이 되거나 250이 되면 종료. 250달러를 따는 경우가 얼마나 될까?
	srand((unsigned)time(NULL));
	int bets = 0, wins = 0;
	int cash = 50;
	printf("현재 가진돈: %d\n", cash);
	
	while (cash > 0 && cash < 250) {
		if ((double)rand() / RAND_MAX < 0.5) { cash++; wins++; printf("+1달러\n"); }
		else { cash--; printf("-1달러\n"); }
		bets++;
		printf("현재 가진돈: %d\n", cash);}

	printf("총 판수: %d\n", bets);
	printf("이긴 판수: %d\n", wins);
	printf("이긴 확률: %f\n", (float)wins / (float)bets);


}

void CHAP6_Q18(void) { //원주율을 구하는 함수를 만들자. 홀수항은 +,짝수항은 -, 분자는 항상4, 분모는 1,4,5,7 이런식으로 증가
	// 사용자에게 계산을 몇째 항까지 진행할지 물어보자.
	double pi_value = 0.0;
	int times;
	printf("몇번째 항까지 계산할까요?: ");
	scanf_s("%d", &times);
	
	for (int i = 1; i <= times; i++) {
		int N = 1;

		if (i == 1) N = 1;
		else N += 2 * (i-1);

		if (i % 2 == 0) { pi_value -= 4.0 / (double)N; }
		else pi_value += 4.0 / (double)N;\
	}

	printf("\n");
	printf("원주율 값은 %lf입니다.", pi_value);
}

void CHAP6_Q19(void) { // NIM게임. 0~3개 사이의 막대를 가져간다. 마지막 막대를 가져간 사람이 패배, 난수를 생성해서 컴퓨터 선택을 진행
	
	srand((unsigned)time(NULL));
	int sticks = 12;
	printf("0~3개의 막대를 선택할 수 있습니다.\n");

	while (sticks > 0) {
		int user = 0;
		int com = 0;

		while (true) {
			printf("\n현재 %d의 막대가 있습니다.\n몇개를 가져가시겠습니까?: ", sticks);
			scanf_s("%d", &user);
			if (user >= 0 && user < 4) break;
			else printf("\n**잘못된 입력입니다.**\n");
		}
		sticks = sticks - user;
		
		if (sticks > 0){
			com = rand() % 4;
			if (com > sticks) com = sticks;
			sticks = sticks - com;
			printf("\n컴퓨터는 %d개의 막대를 가져갔습니다.\n", com);
		}
	}
	printf("게임 종료");
}

void CHAP6_Q20(void) { // 숫자 맞히기. 사용자가 1-100사이의 숫자를 생각한다, 컴퓨터가 질문한다.
	// h : 더 큰 수이다, i : 더 작은 수이다, y : 맞다.
	printf("1에서 100사이의 숫자를 생각하세요.\n");
	printf("질문한 것보다 더 큰 수 이면 h를, 작은 수 이면 i를, 맞췄다면 y를 입력해주세요.\n");

	int highest = 100, lowest = 0;
	int computer;
	char answer;

	computer = (highest + lowest)/ 2;
	while (true) {
		printf("%d입니까? : ", computer);
		answer = getchar();
		while (getchar() != '\n');

		if (answer == 'y') break;
		else if (answer == 'h') { lowest = computer; }
		else if (answer == 'i') { highest = computer; }
		else printf("잘못된 입력입니다.\n");

		computer = (highest + lowest) / 2;
	}
	printf("게임 종료");
}
