//write a program to print circumference and area of circle of radius entered by user by defining own function
#include<iostream>
using namespace std;
int areaofcircle(int r)
{
	float pi=3.14;
	float ans1;
	ans1=pi*r*r;
	return ans1;
}
	int circumference(int r){
		float ans2;
		cin>>r;
		float pi=3.14;
		ans2=2*pi*r;
		return ans2;
		
	}
int main()
{
	int r;
	cin>>r;
	float pi=3.14;
	float ans1;
	float ans2;
	ans1=pi*r*r;
	ans2=2*pi*r;
	cout<<ans1;
	cout<<ans2;
return 0;
}
