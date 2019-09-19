#include<stdio.h>

void main()
{
    int a[10]={1,4,3,7,9,0,2,8,9,1},i,x;
    printf("enter the element to be searched:");
    scanf("%d",&x);
    for(i=0;i<10;i++)
    {
        if(a[i]==x)
        {
            printf("\nelement found at index %d\n",i);
            return;
        }
    }
    printf("\nelement not found\n");
}