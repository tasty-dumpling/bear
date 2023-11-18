#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include <windows.h>

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

void CHAP4_Q1(void);
void CHAP4_Q6(void);
void CHAP4_Q7(void);
void CHAP4_Q8(void);
void CHAP4_Q9(void);

void CHAP5_Q7(void);
void CHAP5_Q8(void);
void CHAP5_Q9(void);
void CHAP5_Q10(void);
void CHAP5_Q11(void);
void CHAP5_Q12(void);

void CHAP6_Q11(void);
void CHAP6_Q12(void);
void CHAP6_Q13(void);
void CHAP6_Q14(void);
void CHAP6_Q15(void);
void CHAP6_Q16(void);
void CHAP6_Q17(void);
void CHAP6_Q18(void);
void CHAP6_Q19(void);
void CHAP6_Q20(void);

void CHAP7_Q7(void);
void CHAP7_Q8(void);
void CHAP7_Q9(void);
void CHAP7_Q10(void);
void CHAP7_Q11(void);

void CHAP8_Q7(void);
void CHAP8_Q8(void);

void get(double value, int* i_part, double* f_part);
void CHAP9_Q6(void);
void find_Min_Max(const int* arr, int size, int* max, int* min);
void CHAP9_Q8(void);

void CHAP10_Q2(void);
void getLine(char* buffer, size_t size);
void upperLine(char* pointer, size_t size);
void CHAP10_Q3(void);
