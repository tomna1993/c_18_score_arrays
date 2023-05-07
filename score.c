#include <cs50.h>
#include <stdio.h>

float average(int userScores[]);

int main(void)
{
	int scores[3];

	//Get three numbers from user
	for(int i = 0; i < 3; i++)
	{
		scores[i] = get_int("Score%i: ", i);
	}

	//Print the average of the three given score
	printf("Average score: %f\n", average(scores));
}

float average(int userScores[])
{
	return (userScores[0] + userScores[1] + userScores[2]) / 3.0;
}