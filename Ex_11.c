#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void pattern_search_index(char str[], char pattern[], int m, int n)
{

	int i,j, count=0, index, flag=0, temp;

	for(i=0;i<m;i++)
	{
		if(str[i] == pattern[count])
		{
			//printf("\n Index is %d", i);
			index = i;
			temp = index;
			for(j=1;j<n;j++)
			{
				if(pattern[j] == str[++temp])
				{
					flag = 1;

					//printf("\n index is %d ", temp-1);
				}
				else
				{
					flag = 0;
					break;
				}
			}



		}

		if(flag == 1)
		{
			printf("\n Pattern matched and the index is %d\n", index);
			break;
		}

	}


}

		

int main()
{
	char str[100], pattern[5];
	int str_len, pattern_len;

	printf("\n Enter the sentence for searching the pattern ");
	gets(str);
	str_len = strlen(str);

	printf("\n Enter the pattern ");
	scanf("%s", pattern);
	pattern_len = strlen(pattern);

	pattern_search_index(str, pattern, str_len, pattern_len);

	return 0;
}