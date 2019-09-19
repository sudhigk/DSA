#include<stdio.h>

void main()
{
    int a[10]={1,4,3,7,9,0,2,8,9,1},i,j,n=10,x;
    for(i=1;i<n;i++)
    {
        x=a[i];
        for(j=i-1;j>=0;j--)
            if(x<a[j])
                a[j+1]= a[j];
            else
                break;
            a[j+1]=x;
    }

    printf("\nsorted array\n");
    for(i=0;i<n;i++)
        printf("%d,",a[i]);
    printf("\n");
}