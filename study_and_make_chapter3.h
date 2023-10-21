#pragma once
#include "project0326.h"

void make_moon_with_lego(void) { // 레고로 달을 만들기 위해 필요한 레고 블럭의 개수는 몇개일까?
	// lego size: W 31.8mm L 15.8mm H 9.6mm
	// moon radius: 1,737km
	double moon_volume, lego_volume, blocks_you_need;
	int moon_radius = 1737;
	moon_volume = 4.0 * PI * moon_radius / 3.0;
	lego_volume = 31.8 * 15.8 * 9.6;
	printf("달의 크기:     %.2lf 세제곱 키로미터\n", moon_volume);
	printf("레고의 크기 : % .2lf 세제곱 밀리미터\n", lego_volume);

	// change moon volume from km to mm
	moon_volume = moon_volume * 1000000;
	blocks_you_need = moon_volume / lego_volume;

	printf("\n레고로 달을 만들기 위해서는 ");
	printf("%.2lf개의 블럭이 필요합니다.", blocks_you_need);
	printf("\n");
}

void CHAP3_Q1(void) { // 지수 형식으로 두 수를 입력받아 합을 출력하기
	double a, b;
	printf("지수 형식으로 입력하세요.\n");
	char A[] = "a를";
	char B[] = "b를";
	a = get_floating(A);
	b = get_floating(B);
	printf("a*b의 값은 %le입니다.", a * b);
	printf("\n");
}

void CHAP3_Q2(void) { // 두 실수를 입력받아 합을 출력하기
	double a, b;
	char A[] = "실수를";
	a = get_floating(A);
	b = get_floating(A);
	printf("두 수의 합: %.2lf", a + b);
}

void CHAP3_Q3(void) {// 반지름을 입력받아 구의 표면적과 부피 계산하기
	double radius;
	char A[] = "반지름을";
	radius = get_floating(A);

	double volume, extent;
	volume = PI * radius * radius * radius;
	extent = 4.0 * PI * radius * radius;
	printf("\n");
	printf("반지름 : %8.2lf\n", radius);
	printf("부피   : %8.2lf\n", volume);
	printf("표면적 : %8.2lf\n", extent);
}

void CHAP3_Q4(void) { // x값을 실수로 입력받아 함수의 결과값 계산하기
	printf("3x^3 - 7x^2 + 9\n");
	double x;
	double y;
	char A[] = "x값을";
	x = get_floating(A);
	y = 3 * x * x * x - 7 * x * x + 9;
	printf("y값은 소수점 둘째자리까지 표시할때, %.2lf 입니다.\n", y);
}

void CHAP3_Q5(void) { // 문자를 입력받아서 아스키 코드 출력하기
	char character;
	char A[] = "문자를";
	character = get_character(A);
	printf("아스키 코드: %d", character);
}

void CHAP3_Q6(void) { // 문자 3개를 입력 받고 역순으로 출력하기
	char a, b, c;
	char A[] = "문자를";
	a = get_character(A);
	while (getchar() != '\n');
	b = get_character(A);
	while (getchar() != '\n');
	c = get_character(A);

	printf("%c %c %c", c, b, a);
}

void CHAP3_Q7(void) { // 사용자에게 자동차로 움직인 거리와 소요시간을 입력받는다. 속력을 출력하자.
	int meter, hour, minute, second;

	char A[] = "거리를 미터단위로";
	meter = get_integer(A);

	printf("소요시간을 시간, 분, 초 단위로 입력해주세요.\n");
	char B[] = "시간을";
	char C[] = "분을";
	char D[] = "초를";
	hour = get_integer(B);
	minute = get_integer(C);
	second = get_integer(D);

	double m, s, km;
	m = minute / 60.0;
	s = second / 3600.0;
	km = meter / 1000.0;

	printf("\n");
	printf("속도: %.2lfkm/h", km / (hour + m + s));
}

void CHAP3_Q8(void) { 
	// 제곱미터를 평으로 환산하자
	// 1평 = 3.3058 제곱미터
	double area;
	char A[] = "면적을 제곱미터 단위로";
	area = get_floating(A);

	double area_p;
	area_p = area / 3.3058;
	printf("%.2lf제곱미터는 %.2lf평입니다.", area, area_p);
}

void CHAP3_Q9(void) { // 1부터 3까지의 정수, 제곱값을 한줄에 하나씩 출력, 반복문 없이 \t사용하기
	printf(" N |\tN*N\n");
	printf("----------------\n");
	printf(" 1 |\t1\n");
	printf(" 2 |\t4\n");
	printf(" 3 |\t9\n");
}

void CHAP3_Q10(void) { // 9번과 유사한 문제, 아스키 코드 일부 출력
	printf(" 문자 |\t코드\n");
	printf("----------------\n");
	printf("   %c  |\t %d\n", 'A', 'A');
	printf("   %c  |\t %d\n",'B','B');
	printf("   %c  |\t %d\n", 'C', 'C');
}

void CHAP3_Q11(void) { // 9번과 유사한 문제
	printf(" 16진수 |\t10진수\n");
	printf("------------------------------\n");
	printf("  %04x  |\t %d\n",253,253);
	printf("  %04x  |\t %d\n",254,254);
	printf("  %04x  |\t %d\n",255,255);
}

void CHAP3_Q12(void) { // 9번과 유사한 문제
	printf("  지수 형식\t|  소수점 형식\n");
	printf("-------------------------------------------\n");
	printf("  %le\t|  %16lf\n",1000000.0,1000000.0);
	printf("  %le\t|  %16lf\n",100000000.04, 100000000.04);
	printf("  %le\t|  %16lf\n",10000.008,10000.008);
}
