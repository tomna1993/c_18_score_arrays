#include <stdio.h>

int main(void)
{
	int scores[3];
	scores[0] = 72;
	scores[1] = 73;
	scores[2] = 33;

	//Print the average of the three given score
	printf("Average score: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}