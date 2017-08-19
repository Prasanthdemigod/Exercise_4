#include<stdio.h>




int compare(int a[], int b[])
{

	int i, flag;

	for(i=0;i<10;i++)
		if(a[i] == b[i])
			flag=1;
		else
			flag=0;

	return flag;


}




int main()
{
	int Array_1[10], Array_2[10];
	int i;
	printf("\n Enter the student grades for 10 students");
	
	printf("\n Elements of array 1: ");

	for(i=0;i<10;i++)
	{
		
		scanf("%d", &Array_1[i]);
	}

	printf("\n Elements of array 2: ");

	for(i=0;i<10;i++)
	{
		
		scanf("%d", &Array_2[i]);
	
	}


	int count =  compare(Array_1, Array_2);

	if (count == 1)
	{
		printf("\n Enter same");
	}
	else
		printf("\n Not same");

	return 0;
}