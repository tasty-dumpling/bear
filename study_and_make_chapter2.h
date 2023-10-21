#pragma once
#include "project0326.h"

void CHAP2_Q1(void) { // 문제에서 요구하는 모양으로 #출력
	int LINE = 6;
	for (int i = 0; i < LINE; i++) {
		printf("#");
		if (i == 3) { for (int j = 0; j < 5; j++) printf("#"); }
		else { for (int j = 0; j < 5; j++) printf(" "); }
		printf("#");
		printf("\n");
	}
	printf("\n");
}

void CHAP2_Q2(void) { // 구매한 상품의 가격과 개수를 받아서 총 금액 도출
	int price, multi;
	char a[] = "상품가격을";
	char b[] = "개수를";
	price = get_integer(a);
	multi = get_integer(b);
	printf("총 가격은 %d 원입니다.", price * multi);
	printf("\n");
}

void CHAP2_Q3(void) { // 나이를 물어보고 내년도의 나이 알려주기
	int age;
	char a[] = "나이를";
	age = get_integer(a);
	printf("내년이면 %d 살이 되시는군요.", age + 1);
	printf("\n");
}

void CHAP2_Q4(void) { // 정수를 입력받고 평균 알려주기
	double sum = 0.0;
	char a[] = "정수를";
	for (int i = 0; i < 3; i++) {
		int integer = 0;
		integer = get_integer(a);
		sum = sum + integer;
	}
	printf("평균은 %lf 입니다.", sum / 3.0);
	printf("\n");
}

void CHAP2_Q5(void) { // 세 개의 정수를 입력받고, 앞의 두 수의 합을 마지막 수로 나눈 값 출력
	int x, y, z;
	char a[] = "정수를";
	x = get_integer(a);
	y = get_integer(a);
	z = get_integer(a);
	printf("첫번째와 두번째 정수를 합한 후 세번째 정수로 나눈 결과: %d", (x + y) / z);
	printf("\n");
}
