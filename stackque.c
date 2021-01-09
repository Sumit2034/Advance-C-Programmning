#include<stdio.h>
#define size 10
int a[size];
int n;
int top=-1;
int isfull()
{
    if(top==size-1)
    {
        return 1;
    }
    else
        return 0;
}
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
int pop()
{
    if(isempty())
        printf("underflow");
   printf("deleted element is %d",a[top]);
    top--;
}
int push(int k)
{
    top++;
    a[top]=k;
}
int main()
{
    printf("enter no of element");
    scanf("%d",&n);
    int i,k;
    for(i=0;i<n;i++)
    {
        if(isfull())
        {
            printf("overflow");
        }
        printf("enter element");
        scanf("%d",&k);
        push(k);
    }
    for(i=0;i<=top;i++)
    {
        printf("%d ",a[i]);
    }
    pop();
}
