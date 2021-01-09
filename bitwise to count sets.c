#include<stdio.h>
int main()
{
    int n,i=0,j,k,l=0,m;
    scanf("%d",&n);
    m=sizeof(int)*8;
    while(i<m)
    {
        k=1<<i;
        i++;
        if(n&k)
        {
            l++;
        }
    }
    printf(" no. of setbits: %d",l);
}
