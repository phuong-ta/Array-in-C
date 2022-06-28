#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int arr1[5];
    int arr2[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter 5 numbers ");
        scanf("%d", &arr1[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
        arr2[i]=arr1[i];
        printf("element %d is %d\n", i+1, arr2[i]);
    }
    

    return 0;
}
