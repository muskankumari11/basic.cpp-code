//online compiler
#include <iostream>
using namespace std;

int main() {
	int a,b,c,ar[50];
	cout<<"enter the elements";
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	//	cout<<"second largest element is : "<<b;
	cout<<"enter element"<<(i+1)<<" :";
	cin>>ar[i];	

	}
	a=b=c=ar[0];
	for(int i=0;i<n;i++)
	{
		if(ar[i]>a)
		{
			b=c;
			c=a;
			a=ar[i];
		}
		else if(ar[i]>b)
		{
			c=b;
			b=ar[i];
		}
		else if(ar[i]>c)
		{
			c=ar[i];
		}
	}
	cout<<a;
	cout<<b;
	cout<<c;
	return 0;
}
