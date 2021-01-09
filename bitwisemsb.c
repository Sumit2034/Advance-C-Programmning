#include<stdio.h>
int main()
{
    int n,i,ne;
    scanf("%d",&n);
    ne=1<<sizeof(int)*8-1;
    if(n & ne)
    {
        printf("set");
    }
    else
        printf(" not set");
}
