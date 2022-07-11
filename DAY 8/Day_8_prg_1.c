#include<stdio.h>
//Declaring the two arg as variable
    int bitposition(int arg1,int arg2)
    {
        arg1=arg1^(1<<arg2);//condition as arg1 equal to first arg1 used XOR condition
    }
    int main()
{
    int a=0x81;
    printf("%d",(a));
}