#include <stdio.h>
int main()

{
//Initialization and declaring the variable
  int num1,num2,pos=3,pos1=6,pos2=7;
  printf("enter the values");
  scanf("%d%d",&num1,&num2);
//condition of the given variable is equal to number
  if((48 & num1) == 48)
  {
      num2=num2|(1<<pos)|(1<<pos1)|(1<<pos2);//position left shift 1 position
      printf("%d",num2);
  }
  else
  printf(" not equal nothing");

}

