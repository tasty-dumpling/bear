
// Chapter 10. 배열 

#include "head.h"

void Q8(void);
void Q9(void);
void Q10(void);
void Q11(void);

int main(void) {
	//Q8();
	//Q9();
	//Q10();
	Q11();

	return 0;
}

/* Q8. 2차원 배열을 이용해 세제곱근을 찾기, 배열에 세제곱근 직접 입력 요구함 */
void Q8(void) {
	int square_root[10][2] = {
		{1,1},
		{2,8},
		{3,27},
		{4,64},
		{5,125},
		{6,216},
		{7,343},
		{8,512},
		{9,729},
		{10,1000} };

	int number;
	number = get_num();

	int check = 11;

	for (int i = 0; i < 10; i++) {
		if (number == square_root[i][1])
			check = i;
	}

	if (check == 11)
		printf("%d의 세제곱근을 찾을 수 없습니다.\n", number);
	else
		printf("%d의 세제곱근은 %d\n", number, square_root[check][0]);
	printf("\n");
}

/* Q9. 10개의 실수를 입력받아서 평균과 표준편차 계산 */
void Q9(void) {
	int numbers[10] = { 0 };
	float average;
	double std_dev;

	for (int i = 0; i < 10; i++) {
		numbers[i] = get_num();
	}

	average = get_average(numbers, 10);
	printf("평균값은 %lf\n", average);

	std_dev = get_stddev(numbers, 10, average);
	printf("표준편차값은 %lf\n", std_dev);


	printf("\n");
}

/* Q10. 5명의 학생, 3번의 시험. 시험 점수는 난수로 배정, 각 시험에 대한 최저,최고 점수 출력 */
void Q10(void) {
	int score[5][3] = { 0 };

	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			score[i][j] = rand() % 100 + 1;
		}
	}

	int highest, lowest;

	highest = score[0][0];
	lowest = score[0][0];
	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 5; b++) {
			if (highest < score[b][a])
				highest = score[b][a];
			if (lowest > score[b][a])
				lowest = score[b][a];
		}
		printf("\n%d번째 시험\n  최대 : %d\n  최소 : %d\n", a + 1, highest, lowest);
	}
}

/* Q11. 벡터의 연산 */
void Q11(void) {
	double A[3] = { 1.00,2.01,3.00 };
	double B[3] = { 3.00,6.01,4.00 };
	double C[3] = { 0 };

	add_vector(A, B, C, 3);
	printf("두 벡터의 합 : ");
	for (int i = 0; i < 3; i++){printf("%.3lf  ", C[i]);}
	printf("\n");

	double product = dot_prod_vector(A, B, 3);
	printf("두 벡터의 내적 : %.3lf", product);
}
