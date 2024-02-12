#include <stdio.h>

int main(){

	int winner = 0;
	int winnerScore = 0;
	int score;
	int totalScore;
	int turn = 1; 

	for(int i = 0; i < 5; i++){
		totalScore = 0;
		for(int j = 0; j < 4; j++){
			scanf("%d", &score);
			totalScore += score;
		}
		if(totalScore > winnerScore){
			winner = turn;
			winnerScore = totalScore;
		}
		turn++;
	}
	printf("%d %d\n", winner, winnerScore);

	return 0;
}