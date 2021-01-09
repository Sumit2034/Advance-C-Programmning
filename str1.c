#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n,c=0,cons=0;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        printf("%c ascii value %d\n",a[i],a[i]);
    }
}
