#include<stdio.h>
#define size 10
int f=-1,r=-1;
int q[size];
int enqueue(int item)
{
    if(r==size-1)
    {
        printf("overflow\n");
    }
    else if(f==-1&&r==-1)
    {
        f++;
        r++;
    }
    else
        r++;
        q[r]=item;
}
int dequeue()
{
    if(f==-1&&r==-1)
    {
        printf("underflow\n");
        return 1;
    }
    else if(f==r)
    {
        f=-1;
        r=-1;
    }
    else
    {
        printf("deleted element is %d",q[f]);
        f++;
    }
}
void print()
{
    for(int i=f;i<=r;i++)
    {
        printf("%d\n",q[i]);
    }
}
void rev(int n)
{
    int i,j=0,b[10];
    for(i=n-1;i<=r;i++)
    {
        b[j]=q[i];
        j++;
    }
    for(i=n-1;i<=r;i++)
    {
        q[i]=b[j-1];
        j--;
    }
}
int main()
{
    int n,i,x,k;
    printf("enter no. of element");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("enter element");
        scanf("%d",&n);
        enqueue(n);
    }
    printf("enter kth element");
    scanf("%d",&k);
    rev(k);
    print();
    dequeue();
}
