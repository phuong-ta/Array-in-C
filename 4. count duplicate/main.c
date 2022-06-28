#include <stdio.h>

int main(int argc, char const *argv[])
{
    // create array
    int arr[5];
    int duplicate =0;
    int duplicatedNumber =0;

    // insert elements into array
    for (int i = 0; i < 5; i++)
    {
        printf("enter 5 numbers ");
        scanf("%d", &arr[i]);
    }
    
    // check duplicate
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i]!=duplicatedNumber && arr[i]== arr[j])
            {
                /* code */
                duplicate+=1;
            }
            
        }
        duplicatedNumber=arr[i];
    }


    printf("Total number of duplicate elements found in the array is : %d", duplicate);

    return 0;
}
