#include<stdio.h>

void main()
{
    int a[10]={0,1,2,3,7,8,9,13,15,16},x;
    printf("enter the element to be searched:");
    scanf("%d",&x);
    int l=0,r=9,m;
    while(l<=r)
    {
        m= (l+r)/2;
        if(x==a[m]){
            
        printf("\nelement found at %d \n",m+1);
            return;
        }
        if(x<a[m])
            r=m-1;
        else
            l=m+1;
    }
    printf("\nelement not found\n");
}    