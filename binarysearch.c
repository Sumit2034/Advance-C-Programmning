#include<stdio.h>
int main()
{
    int a[100],n,i,j,k,search,mid,first,last;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    first=0;
    last=n-1;
    mid=n/2;
    scanf("%d",&search);
    while(first<=last)
    {
        if(a[mid]>search)
        {
            last=mid-1;
        }
        else if(a[mid]==search)
        {
            printf("index = %d value=%d",mid,a[mid]);
            break;
        }
        else if(a[mid]<search)
        {
            first=mid+1;
        }
        mid=(first+last)/2;
    }
}
