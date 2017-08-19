#include<stdio.h>




int get_grade_count(char student_grade[], char grade)
{

	int count = 0, i;

	for(i=0;i<10;i++)
		if(student_grade[i] == grade)
			count++;

	return count;




}




int main()
{
	char student_grade[10];
	int i;
	printf("\n Enter the student grades for 10 students");
	

	for(i=0;i<10;i++)
	{
		printf("\nGrade of student %d", i+1);
		scanf("%s", &student_grade[i]);
	}

	int count =  get_grade_count(student_grade, 'E');

	printf("\n The count is %d", count);

	return 0;
}