#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,c;
    char a[100],b[100];
    gets(a);
    n=strlen(a);
    j=n-1;
    for(i=0;i<n;i++)
    {
        b[j]=a[i];
        j--;
    }
    b[n]='\0';
    c=strcmp(a,b);
    if(c==0)
    {
        printf("yes\n");
    }
    else
        printf("no\n");
   printf("%s ",b);
}
