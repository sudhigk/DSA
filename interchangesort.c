#include<stdio.h>

void swap(int a[],int i, int j);

void main()
{
    int a[10]={1,4,3,7,9,0,2,8,9,1},i,j,n=10;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
            if(a[j]<a[i])
                swap(a,i,j);
    }

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