#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int scores[3];

	//Get three numbers from user
	for(int i = 0; i < 3; i++)
	{
		scores[i] = get_int("Score%i: ", i);
	}

	//Print the average of the three given score
	printf("Average score: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}