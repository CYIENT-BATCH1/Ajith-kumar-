#include<stdio.h>
int main()
{
//Initialize 3 array element
    int arr1[] = { 1,2,3,5,7,11,13,17,19};
    int arr2[] = { 1,2,4,8,16,32,64,128 };
    int arr3[] = { 1,2,17,19,45,46,93,53 };
//array of size and array of each bit to find the common element
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("The common elements are:");
    int i = 0, j = 0, k = 0;
//compare the n1,n2,n3 is lesser than i,j,k
    while (i < n1 && j < n2 && k < n3) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            printf("%d ", arr1[i]);
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])//array 1 index is lesser than 
            i++;
        else if (arr2[j] < arr3[k])
            j++;
        else
            k++;
    }


    printf(" ");
    //findCommon(arr1, arr2, arr3, n1, n2, n3);
    return 0;
}
