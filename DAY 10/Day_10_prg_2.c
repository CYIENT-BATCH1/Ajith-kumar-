#include<stdio.h>
int main()
{
    int reg0,reg1,reg2;
    signed SteeringAngle_sint = -60;
    unsigned char SteeringInformation_Byte[3u];

//register 0 right shift 1 bit
reg0= SteeringAngle_sint|(0x00);
   printf("SteeringAngle_sint reg0:");
   printf("%x %x ",((reg0>>7)&1),(reg0>>6)&1);
   printf("\n");

//register 1 using loop from 7 to 0 ,decrement the 1 bit
reg1=SteeringAngle_sint|(0x00);
   printf("SteeringAngle_sint reg1:");
  for(int i=7;i>=0;i--)
{
   printf("%x ",(reg1>>i)&1);
//register 2 right shift 1 bit and reg 0 right shift 2 bit
reg2= SteeringAngle_sint|(0x00);
   printf("\n");
   printf("SteeringAngle_sint reg0:");
   printf("%x %x ",((reg0>>1)&1),(reg0>>2)&1);
   printf("\n");
}
