#include<stdio.h>
int main()
{
    int n,i=0,j,k=0,m;
    scanf("%d",&n);
    while(i!=1)
    {
        i=n>>k;
        k++;
    }
    printf("%d",k-1);
}
