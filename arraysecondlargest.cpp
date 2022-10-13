//arraysecondlargest.cpp
//onlinecompiler
#include<bits/stdc++.h>
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
  	int largest;
  	int second_largest;
  	for(int i=0;i<n;i++)
  	{
  		if(a[i]>largest)
  		{
  			second_largest=largest;
  			largest=a[i];
  		}
  		else{
  			if(a[i]>second_largest and a[i]<largest)
  			{
  			second_largest=a[i];	
  			}
  		}
  	}
  	cout<<second_largest<<" ";
  return 0;
  }
