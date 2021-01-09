#include<stdio.h>
int main()
{
    int i=0,j=0,k,m[100],n,l,f,c=0;
    n=sizeof(int)*8;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=0;i<l;i++)
    {
        c=0;
        j=0;
        while(j<n)
        {
            k=1<<j;
            if(m[i]&k)
            c++;
            j++;
        }
        //printf("%d\n",c);
        if(c%2==1)
        {
          printf("%d   ",m[i]);
        }
    }
}
