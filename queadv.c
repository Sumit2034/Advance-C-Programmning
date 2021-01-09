#include<stdio.h>
int main()
{
        int n,i,j,a[100][100],b[100][100],m,f,count=0,c[100][100];
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        int k;
        for(k=0;k<n;k++)
        {
                scanf("%d",&b[k][0]);
                c[k][0]=0;
        }
        for (k = 0; k < n; k++)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(b[k][0]>=a[i][j])
                    {
                        c[k][0]++;
                    }
                }
            }
        }
         for(k=0;k<n;k++)
        {
            printf("%d\n",c[k][0]);
        }
}
