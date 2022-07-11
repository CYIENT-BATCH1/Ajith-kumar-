(1) FINDOUT SIZE FOR ALL DATATYPES AND VARIABLES

#include<stdio.h>
int main() 
{
//enter the data type
    int x;
    float f;
    double d;
    char ch;
//use keyword as sizeof to find the size of data type.
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of double:%d bytes\n", sizeof(double));
    printf("Size of char: %d byte\n", sizeof(char));
    return 0;
}