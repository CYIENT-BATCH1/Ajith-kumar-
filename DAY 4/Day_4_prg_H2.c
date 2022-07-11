#include<stdio.h>
int main()
{
   int n;
   printf("Enter an integer\n");
   scanf("%d",&n);//scan the n value

//using the conditional operator to find the even or odd number
   n%2 == 0 ? printf("Even number\n") : printf("Odd number\n");
   return 0;
}