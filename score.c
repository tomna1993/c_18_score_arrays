#include <cs50.h>
#include <stdio.h>

//Create a global variable to set how many scores we want to average
const int score_count = 5;

float average(int userScores[], int length);

int main(void)
{
	int scores[score_count];

	//Get three numbers from user
	for(int i = 0; i < score_count; i++)
	{
		scores[i] = get_int("Score%i: ", i);
	}

	//Print the average of the three given score
	printf("Average score: %f\n", average(scores, score_count));
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