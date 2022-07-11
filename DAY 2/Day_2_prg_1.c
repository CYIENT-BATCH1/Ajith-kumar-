#include <stdio.h>
int main()
{
	long int num;
	printf("enter phone number: ");
	scanf("ld",&num);
	int sum;
//sum of digit logic
	while(num !=0)
	{
		sum=sum+(num%10);
		num=num/10;
	}
	printf("sum is %d",sum);

}
