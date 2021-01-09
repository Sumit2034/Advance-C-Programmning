#include<stdio.h>
int main()
{
    int n,num,i,k,b;
    scanf("%d",&n);
    scanf("%d",&num);
    k=1<<num;
   // b=~k;
    i=n&k;
    printf("%d",i);
}
