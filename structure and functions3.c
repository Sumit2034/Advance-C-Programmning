#include<stdio.h>
struct area
{
    int c;
};
struct area triangle()
{
    float b,h,ar;
    scanf("%f %f",&b,&h);
    ar=(0.5)*b*h;
    printf("%0.2f",ar);
}
struct area rectangle()
{
    int b,l,ar;
    scanf("%d %d",&l,&b);
    ar=l*b;
    printf("%d",ar);
}
struct area circle()
{
    float pi=3.14,rad,ar;
    scanf("%f",&rad);
    ar=pi*rad*rad;
    printf("%0.2f",ar);
}
int main()
{
    struct area cal;
    printf("menu:\n");
    printf("1. triangle\n2. rectangle\n3. circle");
    printf("enter your choice");
    scanf("%d",&cal.c);
    if(cal.c==1)
    {
        triangle();
    }
    else if(cal.c==2)
    {
        rectangle();
    }
    else if(cal.c==3)
    {
        circle();
    }
    else
        printf("enter valid choice");
}
