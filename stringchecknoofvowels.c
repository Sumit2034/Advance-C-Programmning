#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n,c=0,cons=0;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            c++;
        }
        else
        {
            if(a[i]!=' ')
            cons++;
        }

    }
    printf("vowels %d\n",c);
    printf("%d cons.",cons);
}
