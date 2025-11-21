#include <stdio.h>


int main(){
	float  n[4];
	float sum = 0, ave, pro = 1;
	
	scanf("%f", &n[0]);
	float max = n[0], min = n[0];
	sum += n[0], pro *= n[0];

	for (int i=1; i<4; i++){
		scanf("%f", &n[i]);
		sum += n[i];
		pro *= n[i];
		max = n[i] > max ? n[i] : max;
		min = n[i] < min ? n[i] : min;
	}
	ave = sum/4;
	
	printf("Sum : %.6f\n", sum);
	printf("Average : %.6f\n", ave);
	printf("Product : %.6f\n", pro);
	printf("MAX : %.6f\n", max);
	printf("MIN : %.6f\n", min);

	return 0;
}
