#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int i,j,n,d=0,k,l=0;
    gets(a);
    gets(b);
    n=strlen(a);
    k=strlen(b);
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(a[i]==b[j])
            {
                c[d++]=a[i];
                l++;
            }
        }
    }
    if(l==0)
    {
        printf("null");
    }
    c[d]='\0';
    for(i=0;i<d;i++)
    {
        if(c[i]!=c[i+1])
        printf("%c",c[i]);
    }
}
