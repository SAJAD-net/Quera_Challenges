#include <stdio.h>



int main(){
	char bdate[5];
	char saal[3], maah[3];

	scanf("%s", bdate);

	for (int i=0; i<2; i++)
		saal[i] = bdate[i];
	saal[2] = '\0';

	for (int j=0; j<2; j++)
		maah[j] = bdate[2+j];
	maah[2] = '\0';

	printf("saal:%s\nmaah:%s\n", saal, maah);
	return 0;
}
