#include<stdio.h>
#include<stdlib.h>
int subset(int *a,int *b,int n, int n1)
{
    int i,j,count=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                count++;
                break;
            }
        }
    }
    if(count==n1)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int *a,*b,i,j,n,n1;
    scanf("%d",&n);
    scanf("%d",&n1);
    a=(int *)malloc(n*sizeof(int));
    b=(int *)malloc(n1*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n1;i++)
    {
        scanf("%d",&b[i]);
    }
    if(subset(a,b,n,n1)==0)
    {
        printf("no");
    }
    else
    printf("yes");
}
