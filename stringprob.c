#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,d,q=0;
    char a[100],b[100];
    gets(a);
    gets(b);
    n=strlen(a);
    k=strlen(b);
    for(i=0;i<n;i++)
    {
        if(b[0]==a[i])
        {
            q++;
            for(j=1;j<k;j++)
            {
                if(a[i+j]==b[j])
                {
                    q++;
                }
            }

        }
         m=i;
       // printf("%d",q);
        if(k==q)
        {
            break;
        }
    }
    if(q==k)
    {
        printf("present at %d",m);
    }
    else
        printf("not found");
}
