#include <stdio.h>


int main(){
	char num[100];

	scanf("%s", num);

	for (int i=0; num[i] != '\0'; i++){
		int digit = num[i] - '0';
		printf("%d: ", digit);

		for (int j=0; j<digit; j++){
			printf("%d", digit);
		}
		printf("\n");
	}

	return 0;
}
