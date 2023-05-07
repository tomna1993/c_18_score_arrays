#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int scores[3];
	scores[0] = get_int("Score1: ");
	scores[1] = get_int("Score2: ");
	scores[2] = get_int("Score3: ");

	//Print the average of the three given score
	printf("Average score: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}