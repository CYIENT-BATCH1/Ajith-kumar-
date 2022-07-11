#include<stdio.h>
int main()
{
	int no_of_student,num;
	printf("enter no of student: ");
	scanf("%d",&no_of_student);
	num=no_of_student-1;
	printf("No of hand shakes:%d",((num*(num+1))/2));
	return 0;
}
