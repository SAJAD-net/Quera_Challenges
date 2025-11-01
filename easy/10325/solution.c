#include <stdio.h>


int main(){
	int row, seat;
	int to_row, to_seat;

	scanf("%d %d", &row, &seat);

	to_row = 11 - row;
	to_seat =  (seat > 10) ? 21 - seat : 0 + seat;
	
	printf("%s %d %d", ((seat<=10) ? "Right" : "Left"), to_row, to_seat);

	return 0;
}
