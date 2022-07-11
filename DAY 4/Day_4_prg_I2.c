2)HOW TO CLEAR A BIT

#include<stdio.h>
int clearBit(int n, int k)
{
    return (n & (~(1 << (k - 1))));//to clear bit
}
