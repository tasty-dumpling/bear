#pragma once
#include "project0326.h"

void CHAP5_Q7(void) { 
	// 삼각형의 세 변을 입력받아서 삼각형의 종류를 출력
	// 정삼각형,이등변삼형 여부만 파악
	int a, b, c;
	printf("삼각형의 세 변을 입력하세요.: ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b && b == c)printf("정삼각형입니다.\n");
	else if (a == b || b == c || a == c)printf("이등변 삼각형입니다.\n");

}

void CHAP5_Q8(void) { // 근로소득세 계산하기
	/* 1,000만원 이하 8%
	* 4,000만원 이하 17%
	* 8,000만원 이하 26%
	* 8,000만원 초과 35% */
	int income;
	double tax;
	printf("과세 표준을 입력하세요.(단위:만원) : ");
	scanf_s("%d", &income);
	while (true) {
		if (income <= 1000) { tax = (double)income * 0.08; break; }
		else if (income > 1000 && income <= 4000) { tax = ((double)income - 1000) * 0.17 + 80; break; }
		else if (income > 4000 && income <= 8000) { tax = ((double)income - 4000) * 0.26 + 590; break; }
		else if (income > 8000) { tax = ((double)income - 8000) * 0.35 + 1630; break; }
	}
	printf("소득세는 %.3lf만원입니다.\n",tax);
}

void CHAP5_Q9(void) { // 계산기
	int a, b;
	float result = 0.0;
	char c;
	printf("수식을 입력하시오.: ");
	scanf_s("%d", &a);
	c = getchar();
	scanf_s("%d", &b);
	
	switch (c) {
	case '*': result = (float)(a * b); break;
	case '+': result = (float)(a + b); break;
	case '/': result = ((float)a / (float)b); break;
	case '-': result = (float)(a - b); break;
	case '%': result = (float)(a % b); break;}

	printf("계산 결과는 %.2f입니다.", result);
}

void CHAP5_Q10(void) { // 학점을 입력받아서 코멘트를 달아주자.
	int score;
	printf("학점을 입력하세요.: ");
	score = getchar();

	switch (score) {
	case 'A': printf("수고많았습니다.\n"); break;
	case 'B': printf("한 학기 어땠나요?\n"); break;
	case 'C': printf("방학 잘 보내세요.\n"); break;
	case 'D': printf("무탈히 지내세요\n"); break;
	case 'F': printf("다음학기에 만납시다.\n"); break;
	}

}

void CHAP5_Q11(void) { // 좌표는 몇사분면에 있는가
	int x, y;
	printf("점의 좌표를 입력하세요.: ");
	scanf_s("%d %d", &x, &y);

	if (x > 0 && y > 0) { printf("1"); }
	else if (x < 0 && y>0) { printf("2"); }
	else if (x < 0 && y < 0) { printf("3"); }
	else if (x > 0 && y < 0) { printf("4"); }
	printf("사분면 입니다.\n");
}

void CHAP5_Q12(void) { // 3개의 숫자를 입력받는다. 3개 모두 같다면 10,000원을 2개가 같다면 1,000원을 모두 다르다면 100원을 지급한다.
	int one, two, three;
	printf("3개의 숫자를 입력하세요. :");
	scanf_s("%d %d %d", &one, &two, &three);
	
	if (one == two && two == three) {
		printf("10,000원을 받았습니다.\n");
	}
	else if (one == two || one == three || two == three) {
		printf("1,000원을 받았습니다.\n");
	}
	else if (one != two && two != three && three != one) {
		printf("100원을 받았습니다.\n");
	}
}
