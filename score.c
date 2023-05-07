#include <cs50.h>
#include <stdio.h>

float average(int userScores[], int length);

int main(void)
{
	int scores[3];

	//Get three numbers from user
	for(int i = 0; i < 3; i++)
	{
		scores[i] = get_int("Score%i: ", i);
	}

	//Print the average of the three given score
	printf("Average score: %f\n", average(scores, 3));
}

float average(int userScores[], int length)
{
	int sum = 0;

	for(int i = 0; i < length; i++)
	{
		sum += userScores[i];
	}

	return sum / (float) length;
}