#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
//mension in char vowels
//using conditional operator to find the vowel.
(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')?
printf("\n %c is vowel",ch):printf("\n %c is consonant",ch);
}
