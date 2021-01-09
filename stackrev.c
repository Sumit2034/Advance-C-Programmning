#include<stdio.h>
#define size 7
int st[size],top=-1;
int n;
int isfull()
{
    if(top==size-1)
    {
        return 1;
    }
    else
        return 0;
}
void push(int l)
{
    top++;
    st[top]=l;
}
void rev()
{
    int i,j,a[10];
    for(i=0;i<n;i++)
    {
        a[i]=st[top];
        top--;
    }
   // printf("%d",top);
    for(i=0;i<n;i++)
    {
        push(a[i]);
    }
}
int main()
{
    int i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(isfull())
        {
            printf("overflow");
        }
        scanf("%d",&k);
        push(k);
    }
    rev();
    for(i=0;i<n;i++)
    {
        printf("%d  ",st[i]);
    }
}
