#include<stdio.h>
int lcm(int,int);
int main()
{
	int num1,num2,LCM;
	printf("enter 2 no.s");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		LCM=lcm(num2,num1);
	}
	else
	{
		LCM=lcm(num1,num2);
	}
	printf("the lcm of %d and %d is=%d",num1,num2,LCM);
	return 0;
	
}
int lcm(int a,int b)
{
	static int multiple=0;
	multiple=multiple+b;
	if(multiple%a==0&&multiple%b==0)
	{
		return multiple;
	}
	else
	{
		lcm(a,b);
	}
	
}
