#include <stdio.h>
int main()
{
    int arr1[4], arr2[4], arr3[8];
    int tem=0;

    // create first array
    for (int i = 0; i < 4; i++)
    {
        printf("enter 4 number for first array");
        scanf("%d",&arr1[i]);
    }
    // create first array
    for (int i = 0; i < 4; i++)
    {
        printf("enter 4 number for second array");
        scanf("%d",&arr2[i]);
    }
    // move all elements of first and second array into thirst array
    for (int i = 0; i < 8; i++)
    {
        if (i>3)
        {
            arr3[i]=arr2[i-4];
        }else
        {
            arr3[i]=arr1[i];
        }
    }
    
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (arr3[j]<arr3[j+1])
            {
                
                tem=arr3[j+1];
                arr3[j+1]=arr3[j];
                arr3[j]=tem;
            }         
        }     
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d",arr3[i]);
    }
    
    return 0;
}
