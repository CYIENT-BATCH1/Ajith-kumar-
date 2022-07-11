 1.Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0),
  without disturbing the other bits.*/

#include <stdio.h>
int main()
{
//initilize 2 register as variable
	int a=0x58;
	int b=0xff;
//Using XOR operator compare the register a and b. 
	int c=a^b;
	printf("%x",c);
}

II). Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the
 register is 0x55.


#include <stdio.h>
int main()
{
//declaring 4 variable    
int a,b,c,d;
    a=0x55;
//condition set 1 to 0th bit, set 1 to 1st bit, 
//set 1 to 7th bit and print the value after bit set.
    b=a&(1<<0);
    c=a&(1<<1);
    d=a&(1<<7);
    printf("%d %d %d",b,c,d);

}
