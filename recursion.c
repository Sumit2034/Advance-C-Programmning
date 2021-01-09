#include<stdio.h>
int add(int n)
{
    if(n==0)
    return n;
    else
    return n+add(n-1);
}
int main()
{
    printf("%d",add(8));
}
