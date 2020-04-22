#include<stdio.h>
int sum(int n);
int main()
{   
    int num,result;
	scanf("%ld",&num);
	result= sum(num);
	printf("sum of digits is %d",result);
}
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return(n%10+sum(n/10));
	}
		
}
