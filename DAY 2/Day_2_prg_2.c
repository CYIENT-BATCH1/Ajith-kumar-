#include <stdio.h>
int main()
{
	int x=24;
	for(int i=7;i>=0;--i)
	{
         x &(1<<i)?printf("1"):printf("0");
	}
}