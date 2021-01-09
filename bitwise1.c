#include<stdio.h>
int main()
{
    int n,num,i,k;
    scanf("%d",&n);
    scanf("%d",&num);
    k=1<<num;
    i=n^k;//or n|k
    printf("%d",i);
}
