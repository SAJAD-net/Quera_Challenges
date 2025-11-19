#include <stdio.h>



int main(){
	int a = 0, b = 1;
	int c, n;
	int fib[200];
	int isfib;

	scanf("%d", &n);

	for (int i=1; i<=n; i++){
		fib[i-1] = a+b;
		c = b;
		b = fib[i-1];
		a = c;
		
		isfib = 0;
		for (int j=0; j <= i; j++){
			if (i == fib[j]){
				isfib = 1;
				break;
			}
		}
		if (isfib)
			printf("+");
		else
			printf("-");
	}

	return 0;
}
