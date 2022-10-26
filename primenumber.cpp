//prime number
#include <iostream>
using namespace std;

int main() {
	int n,t=0;
	cin>>n;
	for(int i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			t++;
			break;
		}
	}
	if(t==0)
	{
		cout<<"prime"<<n;
	}
	else{
		cout<<"not prime"<<n;
	}
	// your code goes here
	return 0;
}
