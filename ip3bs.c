#include<stdio.h>

void swap(int[],int,int);

void main()
{
    int a[10]={1,4,3,7,9,0,2,8,9,1},i,j,n=10;

    for(i=0;i<n-1;i++)
        for(j=n-1;j>i;j--)
            if(a[j]<a[j-1])
                swap(a,j,j-1);
    
     printf("\nsorted array\n");
    for(i=0;i<n;i++)
        printf("%d,",a[i]);
    printf("\n");
}

void swap(int a[],int i,int j)
{
    int t= a[i];
    a[i]= a[j];
    a[j]= t;
}