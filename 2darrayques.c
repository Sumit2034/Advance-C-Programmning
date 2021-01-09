#include<stdio.h>
int main()
{
    int a[100][100],i,j,m,n,sum=0,max,max1,loc;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
    }
    for(i=0;i<m;i++)
    {
        max1=a[i][0];
        for(j=0;j<n;j++)
        {
            if(max<=a[i][j])
            {
                max1=a[i][j];
                loc=j;
            }
        }
         a[i][loc+1]=a[i][loc];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n-1;j++)
        {
            printf("%d",a[i][j]);
        }
    }
   // printf("%d",max);
}
