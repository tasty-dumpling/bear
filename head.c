
#pragma once

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// 사용자에게 정수를 입력받는 함수
int get_num(void) {
	int number;
	printf("정수를 입력하세요.");
	scanf_s("%d", &number);
	return number;
}

// 수 배열의 평균값을 구하는 함수
float get_average(int array[], int size) {
	float sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + array[i];
	}
	return sum / size;
}

// 수 배열의 표준 편차를 구하는 함수
double get_stddev(int array[], int size, float average) {
	double temp = 0.0;
	for (int i = 0; i < size; i++) {
		temp = temp + pow(array[i] - average, 2);
	}
	temp = temp / size;
	temp = sqrt(temp);
	return temp;
}

// 벡터 A와 B의 합을 배열C로 저장
void add_vector(double A[], double B[], double C[], int size) {
	for (int i = 0; i < size; i++) {
		C[i] = A[i] + B[i];
	}
}

// 벡터 A와 B의 내적을 구하는 함수
double dot_prod_vector(double A[], double B[], int size) {
	double dot_prod = 0.0;

	for (int i = 0; i < size; i++) {
		dot_prod += A[i] * B[i];
	}
	return dot_prod;
}
