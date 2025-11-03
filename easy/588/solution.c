#include <stdio.h>


int main(){
	int count;
	int tmp;
	int max = 0;
	
	scanf("%d", &count);

	for (int i=0; i<count; i++){
		scanf("%d", &tmp);
		if (tmp > max)
			max = tmp;
	}

	printf("%d", max);

	return 0;
}
