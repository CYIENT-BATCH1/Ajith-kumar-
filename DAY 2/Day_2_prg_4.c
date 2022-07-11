#include <stdio.h>
int main()
{
	int count =0,num,i,last,num2;
	printf("enter the number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		num2=i;
		while(num2 !=0)
		{
			last=num2%10;
			if (last ==3)
			{
				count++;
				break;
			}
			num2=num2/10;
		}
	}
	printf("number of three in given number :%d",count);
	return 0;
}

