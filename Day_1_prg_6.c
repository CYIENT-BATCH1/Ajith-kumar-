#include<stdio.h>
int main()
{
int x,y;
printf("enter the value");
scanf("%d %d",&x,&y);
x=x+y;
y=x-y;
x=x-y;
printf("%d %d",x,y);
}