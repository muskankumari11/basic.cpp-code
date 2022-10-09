//onlinecompiler
//2darray
//printingsimple
#include <iostream>
using namespace std;

int main() {
	int m,n;
	cin>>n;
	cin>>m;
	int a[m][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"matrix is\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	// your code goes here
	return 0;
}
