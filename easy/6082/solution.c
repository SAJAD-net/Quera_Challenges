#include <stdio.h>


int main(){
	int n, m;

	scanf("%d %d", &n, &m);
	
	char c;
	int stars = 0;

	for (int j=0; j<n*m; j++){
		scanf(" %c", &c);
		if (c == '*')
			stars++;
	}			

	printf("%d", stars);
	return 0;
}
