#include<stdio.h>
int main()
{
    int n,i,j,k,first,last,mid,n1,n2,a[100],r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&n1);
        scanf("%d ",&n2);
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[j]);
        }
        first=0;
        last=n1;
        mid=n1/2;
        while(first<=last)
        {
            if(a[mid]>=n2)
            {
                last=mid;
                for(i=0;i<=last;i++)
                {
                    if(a[i]==n2)
                    {
                        printf("%d",i);
                        break;
                    }
                }
                break;
            }
            else if(a[mid]<n2)
            {
                for(i=mid;i<=n1;i++)
                {
                    if(a[i]==n2)
                    {
                        printf("%d",i);
                        break;
                    }
                }
                break;
            }
        }
    }
}
