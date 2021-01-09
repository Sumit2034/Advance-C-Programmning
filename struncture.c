#include<stdio.h>
struct stu
{
    int rollno;
    int marks[10];
}s1[100];
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int i,j,k=0,find;

    for(i=0;i<m;i++)
    {
        scanf("%d",&s1[i].rollno);
        for(j=0;j<n;j++)
        {
            scanf("%d",&s1[i].marks[j]);
        }
    }
 scanf("%d",&find);
    for(i=0;i<m;i++)
    {
        if(s1[i].rollno==find)
        {
            k++;
            printf("%d ",s1[i].rollno);
            for(j=0;j<n;j++)
            {
                printf("%d ",s1[i].marks[j]);
               // if(s1[i].marks[j]<40)
                {
                 //   printf("fail");
                }
            }
        }
    }
    if(k==0)
      printf("not found");
}
