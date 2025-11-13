#include <stdio.h>



int main(){
	char hlabel[6];
	int red = 0, yellow = 0;

	scanf("%5s", hlabel);

	for (int i=0; i<5; i++){
		if (hlabel[i] == 'R')
			red++;
		else if (hlabel[i] == 'Y')
			yellow++;
	}
	
	if (red >= 3 || red >=2 && yellow >= 2 || red+yellow == 5)
		printf("nakhor lite");
	else
		printf("rahat baash");

	return 0;
}
