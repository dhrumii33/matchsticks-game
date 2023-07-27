#include<stdio.h>

void add1();
void add2(int,int);
int add3(int,int);
int add4();

main()
{
	int a,b,h,sum;
	//no arguments and no return values
	add1();
	
	// with arguments and no return values
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	add2(a,b);
	
	//arguments and return values
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	h=add3(a,b);
	printf("ans=%d",h);
	
	//no arguments and return values
	a=add4();
	printf("ans=%d",a);
	
	
}

void add1()
{
	int a,b,sum;
  	printf("enter the numbers");
  	scanf("%d%d",&a,&b);
  	sum=a+b;
  	printf("ans=%d",sum);
}
void add2(int x,int y)
{
	int c;
	c=x+y;
	printf("answer=%d",c);
}
int add3(int d,int r)
{
	int f;
	f=d+r;
	return f;
}
int add4()
{
	int a,b,sum;
	printf("enter the values");
	scanf("%d%d",&a,&b);
	sum=a+b;
	return sum;
}
