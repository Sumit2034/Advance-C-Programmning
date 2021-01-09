#include<stdio.h>
int main()
{
    int n,mul,sumev=0,sumod=0,r,i,countod=0,countev=0,sum=0,count=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
        {
            countev++;
            sumev=sumev+r;
        }
        else
        {
            countod++;
            sumod=sumod+r;
        }
        n=n/10;
    }
    printf("even sum %d and sum of odd %d \n",sumev,sumod);
    mul=countod*sumod;
    while(mul!=0)
    {
        i=mul%10;
        sum=sum+i;
        mul=mul/10;;
    }
    printf("sum is %d",sum);
}
