#include <stdio.h>
int main()
{
//Declaring variable and initialize char 
 char *a[]={"apple","orange","litchi","lemon"," ","frog"};
 int size=sizeof a/sizeof(a[0]);
 int pos=0;
 printf("%d\n",size);
 int i;
//loop from 0 to 6 to condition check after it find the empty element.
 for(i=0;i<6;i++)
 {
 if(a[i]==" ")
 {
 a[i]="CYIENT\n";//a[i] is return as (a+i)
 pos=i;
 printf("%s",*(a+i));//*(a+i)
 }
 }
 printf("pos = %d\n",pos);
 return 0;
}
