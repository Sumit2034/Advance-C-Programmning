#include<stdio.h>
#define size 10
int a[size];
int n;
int top=-1;
int push(int k)
{
    if(isfull==size-1)
    {
        printf("overflow");
    }
    top++;
    a[top]=k;
}
int main()
{
    int i,j,k,l,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        push(k);
    }
}
