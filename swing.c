#include<stdio.h>

int main(void)
{
	for(int i = 1; i <= 5; ++i){
		for(int j =1; j <= 5; ++j){
		if(i == j || i + j == 6){
			printf("*");
		}else{
			printf(" ");
			}
		}
	printf("\n");
		//printf((i == j || i + j ==6 ? "*"or" ");
	}
	
	return 0;
}
