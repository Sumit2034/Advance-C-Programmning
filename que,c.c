#include<stdio.h>
int main()
{
    int n,k,a[100],i,j,ele,m,sum,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ele);
        scanf("%d",&k);
        for(j=0;j<ele;j++)
        {
            scanf("%d",&a[j]);
        }
        count=0;
        for(j=0;j<ele;j++)
        {
            for(m=j+1;m<ele;m++)
            {
                sum=a[j]+a[m];
                if(sum==k)
                {
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
}
