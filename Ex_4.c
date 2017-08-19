#include<stdio.h>

void min(int str_3[], int m)
{
	
	int i,j,v;

	//Ascending order of elements

	for(i=2;i <= m-1;i++)
	{
		v = str_3[i];
		j=i;
		while(str_3[j-1] > v && j >= 1)
		{
			str_3[j] = str_3[j-1];
			j--;
		}

		str_3[j] = v;


	}

	printf("\n Ascending order of the numbers");
	for(i = 0;i < m; i++)
		printf("\n %d ", str_3[i]);

	
}



void max(int str_2[], int m)
{
	
	int i,j,v, count=0, temp, max=0;

	//Ascending order of elements

	for(i=0;i <= m-1;i++)
	{
		max = i;
		
		for(j=i+1;j<m;j++)
		{
			if(str_2[j] > str_2[max])
				max = j;
		}

		temp = str_2[max];
		str_2[max] = str_2[i];
		str_2[i] = temp;


	}

	printf("\n Descending order of the numbers");
	for(i = 0;i < m; i++)
		printf("\n %d ", str_2[i]);
		

	
}






int main()
{
	int num[5] = {3,5,6,8,2};
	int str_len, len;

	max(num, 5);
	min(num, 5);
	
	return 0;

}