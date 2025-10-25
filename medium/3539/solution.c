#include <stdio.h>


int main(){

	unsigned long long num;

	scanf("%llu", &num);
	
	if (num == 0)
		printf("0");
	else
		// digital root formula: 1 + ((n-1) % 9
		printf("%d", 1 + (num - 1) % 9);

	return 0;
}
