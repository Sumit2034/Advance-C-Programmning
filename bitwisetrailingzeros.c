#include<stdio.h>
int main()
{
    int n,i=0,j,k=0,m;
    scanf("%d",&n);
    j=sizeof(int)*8;
    while(i<j)
    {
        if(n>>i & 1)
        break;
        k++;
        i++;
    }
    printf("%d",k);
}
