#include<stdio.h>
#include<string.h>
struct func(struct lucky a[10],int b ,int c);
struct lucky
{
    int chosenum;
    int id;
    char name[20];
    char phno[11];
};
int main()
{
    struct lucky getlucky[50];
    struct lucky luckyrecord;
    int total,num;
    scanf("%d",&total);
    scanf("%d",&num);
    luckyrecord=func(getlucky,num,total);
    printf("choosen no. is %d\n",luckyrecord.chosenum);
    printf("id is %d\n",luckyrecord.id);
    printf("name:%s\n",luckyrecord.name);
    printf("phone no. :%s\n",luckyrecord.phno);
    printf("status :won");
}
//int func(struct lucky a[10], int b , int c)
