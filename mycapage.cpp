#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age: \n";
	cin>>age;
	if(age>=18)
	{
		cout<<"you are eligible for voting";
	}
	else
	{
		cout<<"you are not eligible";
	}
	
	return 0;
}
