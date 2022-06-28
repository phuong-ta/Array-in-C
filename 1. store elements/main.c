#include <stdio.h>

int main(void)
{
    /* code */

    printf("enter 10 numbers");
    int store[10];
    for (int i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d", &store[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d\n", store[i]);
    }
    
    
    return 0;
}
