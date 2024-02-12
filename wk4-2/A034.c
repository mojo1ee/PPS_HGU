#include <stdio.h>

int main(){

	int inputNum;
	int count = 0;
	int same = 0;
	int remainder;
	int remainders[10];

	for(int i = 0; i < 10; i++){
		scanf("%d", &inputNum);
		remainder = inputNum % 42;

		same = 0;
		for(int j = 0 ; j < count; j++){
			if(remainders[j] == remainder){
				same = 1;
				break;
			}
		}
		if(same == 0){
			remainders[count] = remainder;
			count ++;
		}
	}

	printf("%d\n", count);

	return 0;
}