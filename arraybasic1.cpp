//onlinecompiler
//arrayfindlargestnumber
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	int largeele=a[0];
	if(a[i]>largeele)
	{
		cout<<a[i];
	}
	}
	//cout<<a[i];
	// your code goes here
	return 0;
}
