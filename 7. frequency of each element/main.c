#include <stdio.h>

int main()
{
    
    int n, ctr=1, abc=0;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&n);
    //create array
    if (n>0)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {   
            printf("element - %d : ",i);
	        scanf("%d",&arr[i]);
        }
        
        // check 
        for (int i = 0; i < n; i++)
        {   
            ctr=1;
            abc=0;
            for (int j = 0; j < n; j++)
            {
                if (i!=j)
            {
		       if(arr[i]==arr[j])
                {
                 ctr++;
                 if (i>j)
                 {
                    abc=1;
                 }
                 
                }
            }
            // print result
            }
            if(ctr>0 && abc==0)
            {
            printf("%d occurs %d times\n",arr[i],ctr);
            }
        }
        

    }
    
    return 0;
}
