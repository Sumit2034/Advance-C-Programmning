#include<stdio.h>
struct distance
{
    int km,m;
};
void add(struct distance,struct distance);
void sub(struct distance,struct distance);
int main()
{
    struct distance s,c;
    scanf("%d %d",&s.km,&s.m);
    scanf("%d %d",&c.km,&c.m);
    add(s,c);
    sub(s,c);
}
void add(struct distance a,struct distance p)
{
    int i,j,k,m,n,fin;
    m=(a.km)*1000+a.m;
    k=(p.km)*1000+p.m;
    fin=m+k;
    n=fin%1000;
    printf("%dkm %dm\n",fin/1000,n);
}
void sub(struct distance a,struct distance b)
{
    int i,j,l,m,n,fin;
    if((a.km)>b.km)
    {
        m=(a.km)*1000+a.m;
        l=(b.km)*1000+b.m;
        fin=m-l;
        n=fin%1000;
        printf("%dkm %dm",fin/1000,n);
    }
    else
    {
        m=(a.km)*1000+a.m;
        l=(b.km)*1000+b.m;
        fin=l-m;
        n=fin%1000;
        printf("%dkm %dm",fin/1000,n);
    }
}
