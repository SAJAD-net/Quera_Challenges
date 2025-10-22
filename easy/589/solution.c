#include <stdio.h>


int main(){

	int innum;
	int factorial_result = 1;
	scanf("%d", &innum);

	for (int i=1; i<=innum; i++)
		factorial_result *= i;
	
	printf("%d", factorial_result);

	return 0;
}
