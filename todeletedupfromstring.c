#include<stdio.h>
#include<string.h>
int del(int k,char *str,int n)
{
    int i;
    for(i=k;i<n;i++)
    {
        str[i]=str[i+1];
    }
}
int deldup(char *str)
{
    int i,j,k,n,d;
    char str1[100];
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(str[i]==str[j] &&i!=j)
            {
                d=j;
                del(d,str,n);
            }
        }
    }
}
int main()
{
    int l;
    char str[100];
    gets(str);
    deldup(str);
    puts(str);
}
