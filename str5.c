#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],d;
    int i,j,c=0,n;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                break;
            }
        }
        if(c==2)
        {
            d=a[i];
            break;
        }
    }
    printf("%c",d);
}
