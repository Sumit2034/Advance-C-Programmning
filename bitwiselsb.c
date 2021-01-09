#include<stdio.h>
int main()
{
    int n,i,c,d,a;
    scanf("%d",&n);
    if(n&1==1)
    {
        printf("set");
    }
    else
        printf("notset\n");
    if(n&1==1)
    {
        printf("\nodd %d",n);
    }
    else
        printf("even %d",n);
}
