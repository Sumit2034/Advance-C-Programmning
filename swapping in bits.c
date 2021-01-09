#include<stdio.h>
int main()
{
    int n,num,i,k,b,j,d,c,h,m,l;
    scanf("%d",&n);
    scanf("%d",&i);
    scanf("%d",&j);
    k=1<<i;
    c=1<<j;
    h=c|k;
    b=n&h;
    if(b==h||b==0)
    {
        printf("%d ",n);
    }
    else
    {
        m=n^k;
        l=m^c;
        printf("%d",l);
    }

}
