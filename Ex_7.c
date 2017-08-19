#include<stdio.h>

void string_copy(char str_2[], int m)
{
	char tmp[10], str_con[10]="";
	int i, count=0;

	for(i=0;i<m;i++)
		if(str_2[i] == 'a' || str_2[i] == 'e' || str_2[i] == 'i' || str_2[i] == 'o' || str_2[i] == 'u')
			count++;

	printf("\n The number of vowel 	occurences is %d", count);

}



int main()
{
	char str[10],ch;
	int str_len, len;

	printf("\n Enter the string 1 ");
	scanf("%s", &str);
	
	len  = strlen(str);

	string_copy(str, len);
	
	return 0;

}