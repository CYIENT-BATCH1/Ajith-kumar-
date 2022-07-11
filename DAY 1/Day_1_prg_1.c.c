#include<stdio.h>
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
//using conditional operator for find the number is special or not.
(num%11==0) ? printf("special") : printf("not special");
return 0;
}
