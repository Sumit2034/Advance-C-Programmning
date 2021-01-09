#include<stdio.h>
#include<stdlib.h>
void printarray(char **array,int n, int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%c ",array[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int i,j,n,m;
    char **array;
    scanf("%d%d ",&n,&m);
    array = (char**)malloc(n*sizeof(char));
    for(i=0;i<m;i++)
    {
        array[i]=(char*)malloc(m*sizeof(char));
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf(" %c",&array[i][j]);
           // fflush(stdin);
        }
    }
    printarray(array,n,m);
}
