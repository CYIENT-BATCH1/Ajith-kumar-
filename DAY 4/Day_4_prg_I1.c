#include <stdio.h>
int setBit(int n, int k)
{
    return (n | (1 << (k - 1)));//to set the bit
}