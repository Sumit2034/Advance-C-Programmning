#include<stdio.h>
void merge(int a[100],int left,int mid, int right)
{
    int i,j,k;
    int n1=mid-left+1;
    int n2=right-mid;
    int left1[n1],right1[n2];
    for(i=0;i<n1;i++)
    {
        left1[i]=a[left+i];
    }
    for(j=0;j<n2;j++)
    {
        right1[j]=a[mid+1+j];
    }
    i=0;
    j=0;
    k=left;
    while(i<n1&&j<n2)
    {
        if(left1[i]<=right1[j])
        {
            a[k++]=left1[i++];
        }
        else
        a[k++]=right1[j++];
    }
    while(i<n1)
    a[k++]=left1[i++];
    while(j<n2)
    a[k++]=right1[j++];

}
void mergesort(int a[100],int left,int right)
{
    int mid;
    if(left<right)
    {
        mid=left+(right-left)/2;
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
        merge(a,left,mid,right);
    }
}
int main()
{
    int a[100],n,i,n1,k;
    scanf("%d",&n);
    k=0;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
     mergesort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
