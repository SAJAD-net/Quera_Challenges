#include <stdio.h>
#include <math.h>


int main(){
	int num;

	scanf("%d", &num);

	for (int i=0; ; i++){
		if (pow(2, i) > num){
			printf("%0.f", pow(2, i));
			break;
		}
	}

	return 0;
}
