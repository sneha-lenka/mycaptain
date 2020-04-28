#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum1=0,sum2=0;
	printf("enter your elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{   printf("element:[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nyour matrix is:\n");
	for(i=0;i<3;i++)
	{   printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		sum1=sum1+a[i][i];
		sum2=sum2+a[i][3-i-1];
	}
	printf("\n sum of diagonal 1 elements is %d",sum1);
	printf("\n sum of diagonal 2 elements is %d",sum2);
	
}
