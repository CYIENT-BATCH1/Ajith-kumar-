#include <stdio.h>
int main()
{
 int n, rev = 0, rem;
 printf("Enter an integer: ");
 scanf("%d", &n);
//using while for n not equal to the zero to find.
 while (n != 0)
 {
    rem = n % 10;
    rev = rev * 10 + rem;//for rev the bit
    n /= 10;
  }

  printf("Reversed number = %d", rev);

  return 0;
}
