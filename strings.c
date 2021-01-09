#include<stdio.h>
#include<string.h>
int checkstring(char *str)
{
    int i=0,j=0,k=0,c=0;
    while(str[i] != '\0')
    {
        i++;
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(str[i]==str[j])
                c++;
        }
    }
    if(c>0)
        return 0;
    else
        return 1;
}
int main()
{
    int l;
    char str[100];
    gets(str);
    l=checkstring(str);
    if(l==1)
    {
        printf("yes");
    }
    else
    printf("no");
}
