#include<stdio.h>
#include<math.h>
int quicksort(int a[100],int l,int h)
{
    int pos;
    if(l<h)
    {
        /*pos is the partitioning index,a[pos] is now at right place*/
        pos=partiton(a,l,h);
        //separately sort elements before
        //partition and after partition
        quicksort(a,l,pos-1);
        quicksort(a,pos+1,h);
    }
}
void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partiton(int a[100],int l ,int h)
{
    int pivot=a[h],j; //pivot
    int i=l-1;// index of smaller than element
    for(j=l;j<=h;j++)
    {
        //if current element is smaller than the pivot
        if(a[j]<pivot)
        {
            i++;//increment index of smaller element
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[h]);
    return (i+1);
}
void printArray(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int a[100],n,i,l,h;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=0;
    h=n-1;
    quicksort(a,l,h);
    printArray(a,n);
}
