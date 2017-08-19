#include<stdio.h>

void string_copy(char str_2[], int m, char ch)
{
	char tmp[10], str_con[10]="";
	int i, count=0;

	for(i=0;i<m;i++)
		if(str_2[i] == ch)
			count++;

	printf("\n The number of occurneces is %d", count);

}



int main()
{
	char str[10],ch;
	int str_len, len;

	printf("\n Enter the string 1 ");
	scanf("%s", &str);
	printf("\nEnter the vowel to be searched for");
	scanf("%s", &ch);
	len  = strlen(str);

	string_copy(str, len, ch);
	
	return 0;

}