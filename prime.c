// prime numbers between 3 and n
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr;
    int n,i,j,k,l,d,x,h;

//taking the inputs

    printf("enter the value of n:\n");
    scanf("%d",&n);

//calculating the number of odd elements

    x = ((n+1)/2)-1;

//allocating required memory

    ptr = (int*)malloc(x * (sizeof(int)));


//entering odd numbers to array

    for(i=0;i<x;i++)
    {
        ptr[i]= ((i+1)*2)+1;
    }
    h = ptr[x-1];

//removing multiples of each odd numbers from array

    for(i=0,d= ptr[0];i<x;i++,d=d+2)
    {
    
        for(k=2*d;k<=h ;k=k+d)
        {
            l= i;
            while(l<x)
            {
                if(ptr[l]==k)
                {
                    ptr[l]=0;
                }
                l++;
            }
        }
    }
// printing the unmarked elements    

    printf("\n");
    for(i=0;i<x;i++)
        if(ptr[i]!=0)
            printf("%d ",ptr[i]);
    printf("\n");
    free(ptr);
}