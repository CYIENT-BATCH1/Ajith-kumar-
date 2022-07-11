#include <stdio.h>
int main()
{
//Initialization array value using pointer to access the array address
    int arr[7]={25,58,6,32,98,7};
    int *ptr;
    int i,j,t;
    ptr=&arr;
//array index start from zero and pointer I and will be incremented
    for(i=0;ptr[i];i++)
{
    for(j=i+1;ptr[j];j++)
    {
        if(ptr[i]>ptr[j])//swap the pointer i and j
        {
            t=ptr[i];
            ptr[i]=ptr[j];
            ptr[j]=t;
        }
    }
    printf("%d ",ptr[i]);//pointer i
}
    return 0;
}
