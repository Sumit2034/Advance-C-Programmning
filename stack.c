#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define size 50

char s1[size];
int top=-1;
int pop();
void push();
void display();
void check();
int main()
{
	char string[100];
	int choice;
	gets(string);
	int l=strlen(string);
push(string,l);

check();



}
void push(char *str,int n)
{
	int i
	for(i=0;i<n;i++)
	{
		top++;
		s1[top]=str[i];
	}

}
void check()
{

	int i;
	for(i=0;i<=top;i++)
	{
	if((s1[i]>='A' && s1[i]<='Z') || (s1[i]>='a' && s1[i]<='z'))
	{
		printf("%c",s1[i]);
	}
}

}

void display()
{
	int j;
	for(j=0;j<=top;j++)
	{
		printf("%c",s1[j]);
	}

}
