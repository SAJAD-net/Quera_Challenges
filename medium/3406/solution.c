#include <stdio.h>


int revNum(int num){
	int rnum = 0;

	while (num > 0){
		rnum = rnum * 10 + num % 10;
		num /= 10;
	}

	return rnum;
}


int main(){
	int num1, num2;

	scanf("%d", &num1);
	scanf("%d", &num2);

	if (revNum(num1) > revNum(num2))
		printf("%d < %d", num2, num1);
	else if (revNum(num1) < revNum(num2))
		printf("%d < %d", num1, num2);
	else
		printf("%d = %d", num1, num2);


	return 0;
}
