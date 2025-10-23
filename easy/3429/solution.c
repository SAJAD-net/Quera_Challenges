#include <stdio.h>


int main(){

	int temp;
	scanf("%d", &temp);

	if (temp > 100)
		printf("Steam");
	else if (temp < 0)
		printf("Ice");
	else
		printf("Water");

	return 0;
}
