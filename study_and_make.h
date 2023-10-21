#pragma once

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979323846
#define SIZE 3
#define ROW 2
#define COL 3

int get_integer(char a[]) {
	int integer = 0;
	printf("%s 입력하세요.: ", a);
	scanf_s("%d", &integer);
	return integer;
}
char get_character(char a[]) {
	char character;
	printf("%s 입력하세요.: ", a);
	character = getchar();
	return character;
}
double get_floating(char a[]) {
	double floating = 0;
	printf("%s 입력하세요: ", a);
	scanf_s("%lf", &floating);
	return floating;
}

void CHAP2_Q1(void);
void CHAP2_Q2(void);
void CHAP2_Q3(void);
void CHAP2_Q4(void);
void CHAP2_Q5(void);
void make_moon_with_lego(void);
void CHAP3_Q1(void);
void CHAP3_Q2(void);
void CHAP3_Q3(void);
void CHAP3_Q4(void);
void CHAP3_Q5(void);
void CHAP3_Q6(void);
void CHAP3_Q7(void);
void CHAP3_Q8(void);
void CHAP3_Q9(void);
void CHAP3_Q10(void);
void CHAP3_Q11(void);
void CHAP3_Q12(void);
