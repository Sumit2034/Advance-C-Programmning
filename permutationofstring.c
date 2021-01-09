#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    int i,j,k,n,l,m=1,c=0,f=1,ans,f1;
    l=strlen(a);
    for(i=1;i<=l;i++)
    {
        m=m*i;
    }
    for(j=0;j<l;j++)
    {
        for(i=j;i<l;i++)
        {
            if(a[j]==a[i+1])
            {
                c++;
            }
        }
    }
    printf("%d\n",c*2);
    n=l-c*2;
    f1=l-n;
    printf("%d\n",n);
    for(i=1;i<=f1;i++)
    {
        f=f*i;
    }
    printf("%d\n",f);
    ans=m/f;
    printf("%d",ans);
}
