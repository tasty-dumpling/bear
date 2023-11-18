#pragma once
#include "project0326.h"

void get(double value, int* i_part, double* f_part) {
	*i_part = floor(value);
	*f_part = value - *i_part;
}

void CHAP9_Q6(void) {

	double input;
	printf("실수를 입력하세요.: ");
	scanf_s("%lf", &input);

	int i_part = 0;
	double f_part = 0.0;

	get(input, &i_part, &f_part);
	printf("정수부: %d\n", i_part);
	printf("실수부: %.2lf\n", f_part);
}

void find_Min_Max(const int* arr, int size, int* max, int* min) {
	*max = arr[0];
	*min = arr[0];

	for (int i = 0; i < size; i++) {
		if (*max < arr[i]) *max = arr[i];
		if (*min > arr[i]) *min = arr[i];
	}
}

void CHAP9_Q8(void) {
	int arr[] = { 9,5,2,7,11,3,8 };
	int max, min;
	find_Min_Max(arr, sizeof(arr) / sizeof(arr[0]), &max, &min);

	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) printf("%d ", arr[i]);
	printf("\n최대값: %d", max);
	printf("\n최소값: %d", min);
}

void CHAP10_Q2(void) {
	char String[20] = {'.'};
	printf("공백없이 입력하세요.\n");
	printf("문자열을 입력하세요.: ");
	scanf_s("%s", String);

	printf("입력된 문자열은 다음과 같습니다.\n%s\n", String);

	int a = 0, num = 0, other = 0;
	for (int i = 0; i < 20; i++) {
		if (String[i] == '.') break;

		if (String[i] >= 'a' && String[i] <= 'z' || String[i] >= 'A' && String[i] <= 'Z') a++;
		else if (String[i] >= '0' && String[i] <= '9') num++;
		else other++;
	}
	printf("문자열 안의 알파벳 문자의 개수: %d\n", a);
	printf("문자열 안의 숫자의 개수: %d\n", num);
	printf("문자열 안의 기타 문자의 개수: %d\n", other-(a+num));

}

void getLine(char* buffer, size_t size) {
	if (fgets(buffer, size, stdin) != NULL) {
		// Remove the trailing newline character, if present
		size_t len = strlen(buffer);
		if (len > 0 && buffer[len - 1] == '\n') {
			buffer[len - 1] = '\0';
		}
	}
}

void upperLine(char *pointer, size_t size) {
	for (int i = 0; i < 100; i++) {
		char charac = *(pointer + i);
		if (charac >= 'a' && charac <= 'z') { *(pointer+i) -= 32; }
		else if(charac == '\0' || charac == '\n') break;
	}
}

void CHAP10_Q3(void) {
	char userInput[100];

	printf("텍스트를 입력하시오: ");
	getLine(userInput, sizeof(userInput));

	upperLine(userInput, sizeof(userInput) / sizeof(userInput[0]));
	printf("\n결과물: %s", userInput);
}
