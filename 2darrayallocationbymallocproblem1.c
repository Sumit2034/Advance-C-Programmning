#include<stdio.h>
#include<stdlib.h>
void printarray(int **arr,int n, int m)
{
    int i,j,count=0,dup,dup2,e=0,f,g;
    for(i=0;i<n;i++)
    {
        count=0;
         dup=arr[0][i];
        for(j=1;j<n;j++)
        {
            for(f=0;f<m;f++)
            {
                if(dup==arr[j][f])
                {
                   // printf("y ");
                    count++;
                    break;
                }
            }
        }
        if(arr[0][0]!=arr[0][i+1])
        if(count==n-1)
        {
            printf("%d ",arr[0][i]);
        }
    }
}
int main()
{
    int m,n,i,j,**arr;
    scanf("%d%d",&n,&m);
    arr=(int**)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        arr[i]=(int*)malloc(m*sizeof(int));
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printarray(arr,n,m);
}
