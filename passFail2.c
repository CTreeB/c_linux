#include<stdio.h>

int main(void)

{
	int score;
	printf("How was your score?: ");
	scanf("%d", &score);
	
	//int pass = score >= 60;
	//printf("%d\n", pass);
	
	if(score >= 60){
		printf("score: %d-----pass\n", score);
	} else{
		printf("score: %d-----fail\n", score);
	}
	
	return 0;
}
