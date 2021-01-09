#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i;
    float arr[100],n,sum=0.0,sd=0.0,*p,j,mean,sub,sum1=0.0,sq;
    scanf("%f",&n);
    p =(float *) malloc (n*sizeof(float));
    for(i=0;i<n;i++)
    {
        scanf("%f ",p+i);
        sum = sum + p[i];
    }
    mean=sum/n;
    for(i=0;i<n;i++)
    {
        sub=mean - *(p+i);
        sum1=sum1+pow(sub,2);
    }
    sum1=sum1/n;
    sd=sqrt(sum1);
    printf("%f",sd);
}
