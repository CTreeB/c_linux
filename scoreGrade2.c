#include<stdio.h>

int main(void)
{
	int score;
	printf("input score: ");
	scanf("%d", &score);
	
	char grade;
	//grade = 'A' or 'B' or 'C' or 'D' or 'F'
	if (score >= 90){
		grade = 'A';
	}else if(score >= 80){
		grade = 'B';
	}else if(score >= 70){
		grade = 'C';
	}else if (score >= 60){
		grade = 'D';
	}else {
		grade = 'F';
	}
	
	printf("score : %d---grade: %c\n", score, grade);
	return 0;
}
