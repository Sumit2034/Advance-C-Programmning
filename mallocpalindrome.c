#include<stdio.h>
#include<stdlib.h>
int palindrome(int *a , int n)
{
    int i,j,r,dup,rev=0,b[10];
    for(i=0;i<n;i++)
    {
        rev=0;
        dup = *(a+i);
        while( dup!=0)
        {
            r = dup%10;
            rev=rev*10+r;
            dup=dup/10;
        }
        if(rev==*(a+i))
        {
            printf("%d\n",*(a+i));
        }
    }
}
int main()
{
    int n,*arr,i;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }

    palindrome(arr,n);
}
