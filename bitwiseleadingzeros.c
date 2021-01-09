#include<stdio.h>
int main()
{
    int n,i=0,j,k=0,m;
    scanf("%d",&n);
    j=sizeof(int)*8;
    m=1<<j-1;
    while(i<j)
    {
        if(n<<i & m)
        break;
        k++;
        i++;
    }
    printf(" no. of leading zero:%d",k);
}

