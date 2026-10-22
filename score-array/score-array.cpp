#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score[5];
	int sum = 0;
	
	for (int i = 0; i < 5; i++) {
		printf("%d번째 점수: ", i + 1);
		scanf("%d", &score[i]);
	}
	for (int i = 0; i < 5; i++) {
		sum = sum + score[i];
	}
	printf("합계 : %d\n", sum);
	printf("평균 : %.1f\n", sum / 5.0);
	int max = score[0];

	for (int i = 1; i < 5; i++) {
		if (score[i] > max) {
			max = score[i];
		}
	}
	printf("최고점 : %d\n", max);
	return 0;
}

