#include <stdio.h>
#include <string.h>

int main(){
	char word[21];

	scanf("%s", word);
	
	int len = strlen(word);

	for (int i=0; i<len; i++){
		char temp[21];
		strcpy(temp, word);

		for (int j=0; j<i; j++){
			temp[j] = word[i];
		}

		printf("%s\n", temp);
	}

}
