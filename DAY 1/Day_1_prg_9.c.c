#include<stdio.h>
int main()
{
int ip1,ip2,op;
printf("AND gate\n");
//using for loop from 0 to 4 i/p .
for(int i=0;i<4;i++)
{
printf("enter the two inputs: ");
scanf("%d %d",&ip1,&ip2);

//AND operation
op=ip1 & ip2;
printf("%d",op);
printf("\n");
}

printf("OR gate\n");
for(int i=0;i<4;i++)
{
printf("enter the two inputs: ");
scanf("%d %d",&ip1,&ip2);

//OR operation
op=ip1 | ip2;
printf("%d",op);
printf("\n");
}

printf("NOT gate\n");
for(int i=0;i<2;i++)
{
printf("enter inputs: ");
scanf("%d",&ip1);

//NOT operation
op=!ip1;
printf("%d",op);
printf("\n");
}
}
