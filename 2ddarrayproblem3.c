#include<stdio.h>
int main()
{
    int a[100][100],i,j,k,b[100][100],n;
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
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]>a[i+1][j+1])
                {
                    b[i][j]=a[i][j];
                }
            }
        }
    }
}
