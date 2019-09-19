#include<stdio.h>

int * merge(int a[],int m,int b[],int n)
{
    int i=0,j=0,k=0;
    static int c[10];

    while(i<=m && j<=n)
        if(a[i]<b[j])
            c[k++]= a[i++];
        else
            c[k++]= b[j++];
    while(i<=m)
        c[k++]= a[i++];
    while(j<=n)
        c[k++]= b[j++];
    return(c);
}

void mergesort(int a[],int l,int r)
{
    int m;
    if(l>=r)
        return;
    m= (l+r)/2;
    (merge(mergesort(a,l,m),m-l+1,mergesort(a,m+1,r),r-m));
}

void main()
{
    int a[10]={1,4,3,7,9,0,2,8,9,1},i,j,n=10;
    mergesort(a,0,9);

    printf("\nsorted array\n");
    for(i=0;i<n;i++)
        printf("%d,",a[i]);
    printf("\n");
}


