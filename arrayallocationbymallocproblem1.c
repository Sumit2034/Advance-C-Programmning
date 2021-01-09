#include<stdio.h>
#include<stdlib.h>
void freq(int *a, int n)
{
    int i,j,b[100],count=0,n1,temp,c[n][n];
    for(i=0;i<n;i++)
    {
        b[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
        }
        c[i][0]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(a[i]==a[i+1])
        c[i][j]=i;
    }
}
int main()
{
    int i,j,n,*a;
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    freq(a,n);
}
