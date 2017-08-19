#include<stdio.h>

void max_three(int str_2[], int m)
{
	char tmp[10], str_con[10]="";
	int i,j,v, count=0;

	for(i=2;i <= m-1;i++)
	{
		v = str_2[i];
		j=i;
		while(str_2[j-1] > v && j >= 1)
		{
			str_2[j] = str_2[j-1];
			j--;
		}

		str_2[j] = v;


	}

	printf("\n The three maximum numbers are");
	for(i = m-1;i >= m-3; i--)
		printf("\n %d ", str_2[i]);
		

	

}



int main()
{
	int num[5] = {3,5,6,8,2};
	int str_len, len;

	max_three(num, 5);
	
	return 0;

}