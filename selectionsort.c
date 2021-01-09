#include<stdio.h>
int main()
{
    int a[100],n,i,j,position,swap,count=0,m,n1;
    scanf("%d",&n1);
    for(m=0;m<n1;m++)
    {
        count=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<(n-1);i++)
        {
            position=i;
            for(j=i+1;j<n;j++)
            {
                if(a[position]>a[j])
                {
                    position=j;
                }
            }
            if(position!=i)
            {
                count++;
                swap=a[i];
                a[i]=a[position];
                a[position]=swap;
            }
        }
    }
    //for(i=0;i<n;i++)
    {
        printf("%d ",count);
    }
}
