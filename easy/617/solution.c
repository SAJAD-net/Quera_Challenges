#include <stdio.h>



int main(){
	int original, n;
	int reversed = 0;

	scanf("%d", &n);
	
	original = n;

	while (n != 0){
	 	int digit = n % 10;
		reversed = (reversed * 10) + digit;
		n /= 10;
	 }

	 if (original == reversed)
		 printf("YES");
	 else
		 printf("NO");


	return 0;
}
