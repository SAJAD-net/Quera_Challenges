#include <stdio.h>


int main(){
	int n[6];
	int c = 1;
	int g = 0;

	for (int i=0; i<6; i++){
		scanf("%d", &n[i]);
		if (c % 2 == 0){
			int j = n[i];
			int k = n[i-1];
			for (;j>0 && k>0; j--, k--)
				g ++;
		}
		c++;
		
	}

	printf("%d", g);
	return 0;
}
