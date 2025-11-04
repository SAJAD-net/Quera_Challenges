#include <stdio.h>


int main(){
	int a, b, l;
	int ttime = 0;

	scanf("%d %d %d", &a, &b, &l);

	for (int i=0; i<l; i++)
		ttime += i % 2 == 0 ? a : b;

	printf("%d", ttime);

	return 0;
}
