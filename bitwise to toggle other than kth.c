#include<stdio.h>
int main()
{
    int i,j=0,k,l,m,n,a;
    scanf("%d",&n);
    printf("enter kth bit");
    scanf("%d",&k);
    unsigned int b;
    m=1<<k;
    a=~m;
    b=n^a;
    printf("%ul",b);
}
