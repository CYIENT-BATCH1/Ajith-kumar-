#include<stdio.h>
int main()
{
//declering the variable name.
int num,rem,rev=0,check;
printf("enter the integer: ");
scanf("%d",&num);
check=num;
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num/=10;
}
//check the condition for find out palindrom or not. 
if(check==rev)
printf("%d is palindrom",check);
else
printf("%d is not a palindrom",check);
return 0;
}
