#include<stdio.h>
int main()
{
    int n,a,b,nth,lsb;
    scanf("%d",&n);
    scanf("%d",&nth);
    a=1<<nth-1;
    if(a&n)
        printf("set");
    else
        printf("not set");
}
