#include<stdio.h>
int d2b(int n)
{
    static int rem,temp=1,num=0;
    if(n==0)
    {
        return num/10;
    }
    else
    {
        rem=n%2;
        temp=temp*10;
        num=num+rem*temp;
        d2b(n/2);
    }
}
int main()
{
    int n,a;
    scanf("%d",&n);
    a=d2b(n);
    printf("%d",a);
}
