#include <stdio.h>


int main(){
	int n, k;

	scanf("%d %d", &n, &k);

	for (int i=k; i>0; i--){
		if ((n%2 != 0) && (n < 0))
			n = (n / 2) - 1;
		else
			n /= 2;
	}
	printf("%d", n);

	return 0;
}
