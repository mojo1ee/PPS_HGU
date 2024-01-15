#include <stdio.h>
#define MAX_STUDENT_BUF 1000

int main(){

	int i, j;
	int sum;
	int numTests;
	int numStudents;
	int count;
	float avg;
	float proportion;

	scanf("%d", &numTests);

	int score[MAX_STUDENT_BUF];
	for(i = 0; i < MAX_STUDENT_BUF; i++){
		score[i] = -1;
	}

	for(i = 0; i < numTests; i++){
		scanf("%d", &numStudents);
		sum = 0;
		count = 0;
		for(j = 0; j < numStudents; j++){
			scanf("%d", &score[j]);
			sum += score[j];
		}
		avg = sum / (1.0 * numStudents);
		for(j = 0; j < numStudents; j++){
			if (score[j] > avg) count++;
		}
		proportion = count / (1.0 * numStudents);
		printf("%.3f%%\n", proportion * 100);
	}

	return 0;
}