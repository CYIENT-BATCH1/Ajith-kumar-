#include <stdio.h>
unsigned int swapBits(unsigned int x)
{
unsigned int even_bits = x & 0xAAAAAAAA;
unsigned int odd_bits = x & 0x55555555;

//right shift the even bit and left shift the odd bit
even_bits >>= 1; //right shift 1 bit 
odd_bits <<= 1;//left shift 1 bit

//shifting of bits used OR operator to return the value
return (even_bits | odd_bits);
}

int main()
{
	unsigned int x = 64;
	printf("%u ", swapBits(x));
        return 0;
}
