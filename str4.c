#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n,c=0,sum=0;
    gets(a);
    n=strlen(a);
    int b[100],k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]=='t'&&a[i+1]=='h'&&a[i+2]=='e'||a[i]=='T'&&a[i]=='h'&&a[i]=='e')
        {
            c++;
        }
    }
    printf("the occur %d times",c);
}
