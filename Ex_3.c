#include<stdio.h>


int main()
{
	int score;
	printf("\n Enter the score");
	scanf("%d", &score);

	if(score >= 45 && score <= 49)
		if(score + 2 <= 50)
			score = score+2;
		else
			score = 50;

	if(score >= 40 && score <= 44)
		score = score+3;
			
	if(score >= 35 && score <= 39)
		score = score+4;

	if(score >= 30 && score <= 34)
	
		score = score+5;

		
	if(score >= 25 && score <= 29)
	
		score = score+6;
		
	
	printf("\n Aftr grce marks the score is %d", score);


	return 0;
}