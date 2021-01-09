#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j,k,c=0,l,m,n;
    gets(a);
    gets(b);
    l=strlen(a);
    k=strlen(b);
    if(l==k)
    {
        for(i=0;i<l;i++)
        {
            for(j=0;j<k;j++)
            {
                if(a[i]==b[j])
                {
                    c++;
                    b[j]=0;
                    break;
                }
            }
        }
        //printf("%d",c);
        if(c==k)
        {
            printf("anagram");
        }
        else
            printf("not anagram");
    }
    else
        printf("enter same length of string");
}
