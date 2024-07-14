#include <stdio.h>
#include <stdlib.h>

int carp (int a,int b)
{
	a*=b;
	printf("%d",a);
}

int bol (int a,int b)
{
	a=a/b;
	printf("%d",a);
}

int topla (int a,int b)
{
	a=a+b;
	printf("%d",a);
}

int cikar (int a,int b)
{
	a=a-b;
	printf("%d",a);
}
	int a,b;
	char islem;

int main() 
{
	
	printf("%s","yapacagin islemi sec(*,/,+,-)\n");
	scanf("%c",&islem);
	
	scanf("%d",&a);
	scanf("%d",&b);
	if(islem=='*')carp(a,b);
	else if(islem=='/')bol(a,b);
	else if(islem=='+')topla(a,b);
	else if(islem=='-')cikar(a,b);
}
