#include <stdio.h>



int main(){
	char sevenS[10][7] = {"sib", "samanoo", "somaq", "senjed", "sabze", "serke", "sir"};
	int ms;

	scanf("%d", &ms);

	for (int i=0; i<ms; i++)
		printf("%s\n", sevenS[i]);

	return 0;
}
