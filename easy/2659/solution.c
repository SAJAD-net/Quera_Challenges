#include <stdio.h>



int main(){
	int len;
	
	scanf("%d", &len);

	char str1[len+1], str2[len+1];

	scanf("%s", str1);
	scanf("%s", str2);
	
	int dcount = 0;
	for (int i=0; i<len; i++){
		if (str1[i] != str2[i])
			dcount++;
	}

	printf("%d", dcount);
	return 0;
}
