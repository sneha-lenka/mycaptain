#include<stdio.h>
struct employee
{
	int empno;
	char department[30];
	float salary;
};
void display(struct employee e);
int main()
{
	struct employee emp;
	printf("Enter employee number");
	scanf("\n %d",&emp.empno);
	printf("\n enter department");
	scanf("\n %s",emp.department);
	printf("\n enter salary");
	scanf("\n %f",&emp.salary);
	display(emp);
	return 0;
}
void display(struct employee e)
{
	printf("displaying info \n");
	printf("employee number:%d",e.empno);
	printf("\n department:%s",e.department);
	printf("\n salary:%f",e.salary);
}
