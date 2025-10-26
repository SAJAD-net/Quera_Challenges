#include <stdio.h>


int main(){
	int num;
	int tmp = 0;

	scanf("%d", &num);

	for (int i=1; i<=num/2; i++){
		if (num % i == 0)
			tmp += i;
	}

	if (tmp == num)
		printf("Yes");
	else
		printf("No");
	
	return 0;
}
