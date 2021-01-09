#include<stdio.h>
int main()
{
    int a[100],i,j,n,pos,k,swap,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[pos]>a[j])
            {
                pos=j;
            }
        }
        if(pos!=i)
        {
            swap=a[i];
            a[i]=a[pos];
            a[pos]=swap;
        }
        if(k==i)
        {
            for(s=0;s<n;s++)
            {
                printf("%d ",a[s]);
            }
        }
    }
}
