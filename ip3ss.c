#include<stdio.h>

void swap(int a[],int  i, int j);

void main()
{
    int a[10]={1,4,3,7,9,0,2,8,9,1},i,j,n=10,k,p;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[k])
                k= j;
            swap(a,i,k);
            // for(p=0;p<n;p++)
                // printf("%d,",a[p]);
            // printf("\n");
        }
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