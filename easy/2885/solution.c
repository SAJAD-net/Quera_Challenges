#include <stdio.h>


int main(){
	
	int count;
	const char *output = {"man khsohghalb hastam"};

	scanf("%d", &count);

	for(int i=0; i<count; i++)
		printf("%s\n", output);

	return 0;
}
