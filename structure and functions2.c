#include<stdio.h>
struct date
{
    int d,m,y;
};
void cal(struct date dob)
{
    int pd,pm,py;
    printf("enter present date");
    scanf("%d %d %d",&pd,&pm,&py);
    py=py-dob.y;
    if(pm>=dob.m)
    {
        pm=pm-dob.m;
    }
    else
    {
        pm=dob.m-pm;
        py=py-1;
        pm=12-pm;
    }
    if(pd<dob.d)
    {
        pd=dob.d-pd;
        pd=30-pd;
    }
    else
    {
        pd=pd-dob.d;
        if(pd<0)
        {
            pd=pd * (-1);
            pm=pm-1;
        }
    }
    printf("%d year %d month %d days ",py,pm,pd);
}
int main()
{
    struct date pre;
    printf("enter your dob");
    scanf("%d %d %d",&pre.d,&pre.m,&pre.y);
    cal(pre);
}
