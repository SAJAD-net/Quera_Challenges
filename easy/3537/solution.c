#include <stdio.h>


int main(){
	const char *ochar = "oooooooooo"; // 10 o's
	int onum;
	scanf("%d", &onum);
	
	printf("W%.*sw!\n", onum, ochar);
	return 0;
}
