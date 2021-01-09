#include<stdio.h>
int evenodd(int a[100],int n)
{
    int i,sumev=0,sumod=0,b[100],c[100],c1=0,c2=0,m1=1,m2=1,m;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[c1]=a[i];
            c1++;
            sumev=sumev+a[i];
            m1=m1*a[i];
        }
        else
        {
            c[c2]=a[i];
            c2++;
            sumod=sumod+a[i];
            m2=m2*a[i];
        }
    }
    if(sumod%2==0)
    {
        m=m1*m2;
        printf("sum of odd %d",m);
    }
    printf("multiple :%d\n",m1);
    printf("multiple 2 :%d",m2);

}
int main()
{
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    evenodd(a,n);
}
