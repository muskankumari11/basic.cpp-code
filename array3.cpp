//printmaxorminnum
//onlinecompiler
//https://ideone.com/x3HtQA
#include <iostream>
#include<climits>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int maxnum=INT_MIN;
	int minnum=INT_MAX;
	for(int i=0;i<n;i++){
	if(a[i]>maxnum)
	{
		maxnum=a[i];
	}

	if(a[i]<minnum){
	
		minnum=a[i];
}
}
cout<<maxnum<<" "<<minnum<<endl;
return 0;
}
