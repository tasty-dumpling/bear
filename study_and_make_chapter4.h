#pragma once
#include "project0326.h"

void CHAP4_Q1(void) { // 체중과 신장을 입력받아서 BMI계산하기
	int weight, height;
	char A[] = "체중을";
	char B[] = "신장을";
	weight = get_integer(A);
	height = get_integer(B);
	height = height / 100;
	float BMI = (float)weight/(float)(height * height);
	printf("%lf", BMI);
}

void CHAP4_Q6(void) { // 실수를 입력받는다, 정수부와 소수부를 출력한다.
	double floating_num;
	char A[] = "실수를";
	floating_num = get_floating(A);
	printf("정수부 : %d\n", (int)floating_num);
	printf("소수부 : %lf\n", floating_num - (int)floating_num);
}

void CHAP4_Q7(void) { // 임의의 숫자 입력받기, 입력받은 수의 최하위 비트를 출력하자.
	int num;
	char A[] = "숫자를";
	num = get_integer(A);
	int LSB = num & 1;
	printf("LSB는 %d입니다.", LSB);
}

void CHAP4_Q8(void) { //임의의 숫자를 입력받는다. 입력받은 숫자의 n번째 비트를 1로 변환한다
	int num,n;
	char A[] = "숫자를";
	char N[] = "n을";
	num = get_integer(A);
	printf("입력한 숫자: %d\n", num);
	n = get_integer(N);
	num |= (1 << n);
	printf("변환후 숫자: %d\n", num);
}

void CHAP4_Q9(void) { // 세개의 정수를 입력받아서 계산진행
	int a, b, c;
	printf("3개의 정수를 입력하세요.\n");
	scanf_s("%d %d %d", &a, &b, &c);

	printf("%d\n", (a + b) % c);
	printf("%d\n", (((a % c) + (b % c)) % c));
}
