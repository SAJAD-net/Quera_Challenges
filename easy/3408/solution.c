#include <stdio.h>
#include <string.h>

int main(){
	int wordCount;
	char words[200];
	
	scanf("%d", &wordCount);
	scanf(" %[^\n]", words);

	int len = strlen(words);
	if (words[len-1] == '\n') words[len-1] = '\0';
	
	int i = strlen(words) - 1;

	while (wordCount>0){
	
		while (i>=0 && words[i] == ' ')
			i--;

		int end = i;

		while (i>=0 && words[i] != ' ')
			i--;

		int start = i + 1;

		for (int j=start; j<=end; j++)
			putchar(words[j]);

		if (i>=0) putchar(' ');

		wordCount--;
	}

	putchar('\n');

	return 0;
}
