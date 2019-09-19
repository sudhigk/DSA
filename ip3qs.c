#include<stdio.h>

int a[10]={1,4,3,7,9,0,2,8,9,1};

void quicksort(int, int);
int partition(int, int);

void main()
{
    quicksort(0,9);
    printf("sorted array is\n");
    for(int i=0; i<10; i++)
        printf("%d,",a[i]);
}

void quicksort(int p,int r)
{
    int q;
    if(p< r)
    {
        q= partition(p,r);
        quicksort(p,q-1);
        quicksort(q+1,r);
    }
}

int partition(int p, int r)
{
    int t= a[p];
    int q= p;
    for(int i =p+1; i<=r; i++)
        if(a[i]<t)
        {
            a[q++]= a[i];
            a[i]= a[q];
        }
    a[q]= t;
    return q;
}
