#include <stdio.h>


int main(){
	int n;

	scanf("%d", &n);

	int a = (int)(n/2);
	int max = (a+1) * ((n - a) + 1); 
	printf("%d", max);

	return 0;
}
