#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n,c=0,sum=0;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
       if(a[i]!='1'&&a[i]!='2'&&a[i]!='3'&&a[i]!='4'&&a[i]!='5'&&a[i]!='6'&&a[i]!='7'&&a[i]!='8'&&a[i]!='9'&&a[i]!='0')
        {
            sum=sum+a[i];
        }
    }
    printf("%d \n",sum);
}

