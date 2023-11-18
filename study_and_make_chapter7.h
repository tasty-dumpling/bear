#pragma once
#include "project0326.h"

void CHAP7_Q7(void) {// 사용자에게 10개의 수를 입력받는다. 평균과 표준편차를 구하여라.
	int sum = 0;
	double mean, std;

	for (int i = 0; i < 10; i++) {
		int input;
		printf("데이터를 입력하세요. : ");
		scanf_s("%d", &input);
		sum += input;}

	mean = (double)sum / 10.0;
	std = sqrt(mean);
	printf("평균: %lf\n표준편차: %lf\n",mean,std);
}

void CHAP7_Q8(void) { // 배열에서 사용자가 원하는 데이터 삭제하기
	int list[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int delete;

	printf("멈추고 싶다면 0을 입력하세요.\n\n");

	while (true) {
		printf("현재의 배열: ");
		for (int i = 0; i < 10; i++) { printf("%d ", list[i]); }
		printf("\n삭제하고 싶은 데이터를 입력하세요.: ");
		scanf_s("%d", &delete);

		if (delete == 0) break;

		for (int j = 0; j < 10; j++) {
			if (list[j] == delete) {
				for (int k = j; k < 9; k++) {
					list[k] = list[k + 1]; }
				list[9] = 0;
			}}}

	printf("현재의 배열: ");
	for (int i = 0; i < 10; i++) { printf("%d ", list[i]); }
}

void CHAP7_Q9(void) { // 영화관 예약석 보여주기
	int theater[10][10] = { 0 };
	int row, col;
	
	printf("0은 빈 좌석 8는 예약 좌석입니다.\n");
	while (true) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) { printf("%d ", theater[i][j]); }
			printf("\n"); }

		printf("어느 좌석을 선택하시겠습니까? (행,열): ");
		scanf_s("%d,%d", &row, &col); row--; col--;

		theater[row][col] = 8;
		printf("\n\n");
	}
}

void foot_print(int list[][9]) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (list[i][j] == 0) printf(" * ");
			else if (list[i][j] == 1) printf(" # ");
			else if (list[i][j] == 2) printf(" @ ");
		}
		printf("\n");
	}
}

void CHAP7_Q10(void) { // random walk
	int tile[9][9] = { 0 };
	int row = 4, col = 4;
	tile[row][col] = 1;
	srand((unsigned)time(NULL));

	while (true) {
		foot_print(tile);
		Sleep(1000);
		system("cls");

		int move = 0;
		move = rand() % 8 + 1;

		switch (move) {
		case 1:row--; break;
		case 2:row--; col++; break;
		case 3:col++; break;
		case 4:row++; col++; break;
		case 5:row++; break;
		case 6:row++; col--; break;
		case 7:col--; break;
		case 8:row--; col--; break;
		}

		if (row < 0 || col < 0 || row > 8 || col > 8)break;
		
		if (tile[row][col] == 0)tile[row][col] = 1;
		else if (tile[row][col] == 1) tile[row][col] = 2;
		else if (tile[row][col] == 2) tile[row][col] = 1;
	}

	foot_print(tile);
}

void CHAP7_Q11(void) {

}
