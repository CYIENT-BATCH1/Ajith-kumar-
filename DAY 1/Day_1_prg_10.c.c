#include<stdio.h>
int main()
{
int A,B,C;
printf("enter the number A,B and C");
scanf("%d %d %d ",&A,&B,&C);
//using the if condition to finding the largest of three num.
if(A>=B&&A>=C)
printf("%d is the largest number",A);
if(B>=A&&B>=C)
printf("%d is the largest number",B);
if(C>=A&&C>=B)
printf("%d is the largest number",C);
return 0;
}
