#include < stdio.h > 
int main()  
{  
int a, b, big;  
printf("Enter 2 numbers\n");  
scanf("%d%d", &a, &b); //scan the two variable
//using conditional operator to finding the given number is biggest of 2 num. 
(a > b) ? (big = a) : (big = b);  

printf("Biggest of %d and %d is %d\n", a, b, big);  
return 0;  
}  