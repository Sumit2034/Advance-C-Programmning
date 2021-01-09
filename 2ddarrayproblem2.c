#include<stdio.h>
int main()
{
    int a[100][100],i,j,n,k,t,r,e,temp,b[100][100];
   // scanf("%d",&t);
    //for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            e=n-1;
            for(j=0;j<n;j++)
            {
                b[i][j]=a[e][i];
                e--;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
    }
}
