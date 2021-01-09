#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],chr;
    int i,j,c=0,n,d,k;
    gets(a);
    n=strlen(a);
    scanf("%d",&k);
    scanf(" %c",&chr);
    for(i=n-1;i>=k;i--)
    {
        a[i+1]=a[i];
    }
    a[n+1]='\0';
    a[k]=chr;
    puts(a);
}
