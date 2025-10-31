#include <stdio.h>


int main(){
	int current_score;
	int tdays;
	int final_score;

	scanf("%d", &current_score);
	scanf("%d", &tdays);

	if (tdays == 0)
		printf("%d", 20);
	else if (tdays == 7)
		printf("%d", current_score);
	else{
		final_score = current_score - tdays;
		if (final_score > 0)
			printf("%d", final_score);
		else
			printf("%d", 0);
	}

	return 0;
}
