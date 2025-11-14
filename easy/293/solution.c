#include <stdio.h>



int main(){
	int anum, bnum;

	scanf("%d\n%d", &anum, &bnum);

	for (int i=anum; i<=bnum; i++){
		int isPrime = 1;
		for (int j=2; j<=i/2; j++)
			if (i % j == 0){
				isPrime = 0;
				break;
		}
		if (isPrime && i != 1)
			printf("%d\n", i);
	}

	return 0;
}
