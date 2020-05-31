#include<iostream>
using namespace std;
int main()
{
	int *p,arr[5],i,j;
	cout<<"enter elements"<<"\n";
	for(i=0;i<=6;i++)
	{
		cin>>arr[i];
	}
	p=arr;
	for(j=0;j<=6;j++)
	{
		cout<<*p<<"\n";
		p++;
	}
return 0;	
}
