
#pragma once

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int get_num(void) {
	int number;
	printf("정수를 입력하세요.");
	scanf_s("%d", &number);
	return number;
}

float get_average(int array[], int size) {
	float sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + array[i];
	}
	return sum / size;
}

double get_dev(int array[], int size, float average) {
	double temp = 0.0;
	for (int i = 0; i < size; i++) {
		temp = temp + pow(array[i] - average, 2);
	}
	temp = temp / size;
	temp = sqrt(temp);
	return temp;
}
