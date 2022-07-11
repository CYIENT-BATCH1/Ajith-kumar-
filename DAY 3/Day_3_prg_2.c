#include <stdio.h>
int main()
{
	int num,num2,sum=0;
	printf("enter 5 digit number : ");
	scanf("%d",&num);
//to calculate the sum 1st and 2nd number.
	for(int i=0;i<5;i++)
	{
	  num2=num%10;
          if((i == 1) || (i == 4))
	  {
	     sum = sum + num2;
	   }
	     num = num /10;
	}
	printf("sum is %d",sum);
}