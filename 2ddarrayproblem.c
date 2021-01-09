#include<stdio.h>
int main()
{
    int a[100][100],i,j,k,l,sum=0,m,n,e,f,g,r,sod,totalsum=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&k,&l);
    for(i=0;i<n;i++)
    {
        sod=0;
        sum=0;
        f=0;
        for(j=0;j<m;j++)
        {
            sum=sum+a[j][i];
        }
        while(sum!=0)
        {
            r=sum%10;
            sod=sod+r;
            sum=sum/10;
        }
        if(sod>9)
        {
            while(sod!=0)
            {
                e=sod%10;
                f=f+e;
                sod=sod/10;
            }
            totalsum=totalsum+f;
        }
        totalsum=totalsum+sod;
    }
    totalsum=totalsum+a[k][l];
    printf("%d",totalsum);
}
