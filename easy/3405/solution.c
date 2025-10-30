#include <stdio.h>


int main(){
	int numbers[1000];
	int count = 0;

	for (int i=0; i<1000; i++){
		scanf("%d", &numbers[i]);
		count++;
		if (numbers[i] == 0)
			break;
	}

	for (int j=count-2; j>=0; j--){
		printf("%d\n", numbers[j]);
	}

	return 0;
}
