#include <stdio.h>


int main(){
	int n;
	char fname[101];

	scanf("%d %s", &n, fname);

	for (int i=0; i<n; i++)
		printf("copy of ");
	
	printf("%s", fname);

	return 0;
}
