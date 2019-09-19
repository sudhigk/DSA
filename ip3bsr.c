#include<stdio.h>

int binsearch(int a[],int l,int r,int x)
{
    int m;
    if(l<=r)
    {
        m= (l+r)/2;
        // printf("\n l=%d r=%d m=%d",l,r,m);
        if(a[m]==x)
            return m;
        if(x<a[m])
            return(binsearch(a,l,m-1,x));
        else
            return(binsearch(a,m+1,r,x));
    }
    return -1;
}

void main()
{
    int a[10]={0,1,2,3,7,8,9,13,15,16},x,res;
    printf("enter the element to be searched:");
    scanf("%d",&x);
    if((res=binsearch(a,0,9,x))==-1)
        printf("\nelement not found\n");
    else
        printf("\nelement found at %d\n",res+1);
}