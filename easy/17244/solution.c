#include <stdio.h>


int main(){
	int capacity;
	int charging_time = 0;

	scanf("%d", &capacity);

	for (int i=0; i<capacity; i++)
		charging_time += i+1;

	printf("%d", charging_time);

	return 0;
}
