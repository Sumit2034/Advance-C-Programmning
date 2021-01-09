#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, j, k, l = 0,max,d;
    gets(str);
    k = strlen(str);
    int arr[100];
    for(i=0;i<k;i++)
        arr[i]=-1;
    for (i = 0; i < k; i++)
    {
        l=1;
        for (j = i+1; j < k; j++)
        {
            if (str[i] == str[j])
            {
                l++;
                arr[j]=0;
            }
        }
        if(arr[i]!=0)
        {
            arr[i]=l;
        }
    }
    max=arr[0];
    for (i = 0; i < k; i++)
    {
        for(j=0;j<k;j++)
        {
            if(max<arr[i])
            {
                max=arr[i];
                d=str[i];
            }
        }
        //if(arr[i]!=0)for freq of all elements
        //printf("%c occur %d times",str[i],arr[i]);
    }
    printf("%c",d);
}
