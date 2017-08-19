#include<stdio.h>

void string_copy(char str_2[], int m)
{
	char tmp[10], str_con[10]="";
	int i;

	for(i=0;i<m;i++)
		str_con[i] = str_2[i];

	printf("\n The copied string is %s", str_con);



}

void string_concatenate(char str[], int m)
{
	char tmp[10], str_con[10];
	int len, i ,j;
	printf("\n Enter the string u want to concatenate");
	scanf("%s", tmp);
	len = strlen(tmp);
	
	for(i=0;i<m;i++)
		str_con[i] = str[i];
	for(j=0;j<len;j++)
		str_con[i++] = tmp[j];

	

	printf("\n The concatenated string is %s", str_con);



}

void string_copy_nchars(char str_1[], int m)
{
	char tmp[10], str_con[10]="";
	int i;

	int noc;
	printf("\n Enter the number of characters to be copied");
	scanf("%d",&noc);

	for(i=0;i<noc;i++)
		str_con[i] = str_1[i];

	printf("\n The copied string is %s", str_con);


}



int main()
{
	char str[10];
	int str_len, len;

	printf("\n Enter the string 1 ");
	scanf("%s", &str);
	len  = strlen(str);

	string_copy(str, len);
	string_concatenate(str, len);
	string_copy_nchars(str, len);

	return 0;

}