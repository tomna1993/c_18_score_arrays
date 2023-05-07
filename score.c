#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int scores[3];
	int n = 0;

	//Get three numbers from user
	while(n < 3)
	{
		scores[n] = get_int("Score%i: ", n);
		n++;
	}

	//Print the average of the three given score
	printf("Average score: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}