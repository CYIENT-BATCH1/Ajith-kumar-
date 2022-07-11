3. Set the register T0CON value such a way that bit TMR0ON and PSA bit are set
  (i), without disturbing the other bits.

#include<stdio.h>

int main()
{
//Initialize two position as pos1, pos2 
int n=0xfa;
int pos1=3;
int pos2=7;

//Using conditional operator n value is equal
n=n|(1<<pos1)|(1<<pos2);
printf("%x",n);

}


(ii)Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register if the value of the register is 0xF3  */

#include <stdio.h>
int main()
{
//declaring variable name
int n=0xf3,x,i;
for(i=2;i>=0;i--)
{
//1 bit right shifted from i condition is true
x=(n>>i)&1;
printf("%x",x);
}

}