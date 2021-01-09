#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,k,n,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("intersection:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d  ",a[i]);
            }
        }
    }
    printf("\nunion:");
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                c++;
                d++;
                break;
            }
        }
        if(c==0)
        {
            printf("%d ",a[i]);
        }
    }
    for(i=d;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}
