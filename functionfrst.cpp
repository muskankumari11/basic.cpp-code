//function basics
#include <iostream>
using namespace std;
int sum(int a,int b){
return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int multiplication(int a,int b)
{
	return a*b;
}
bool sameNumber(int a,int b){
	if(a==b)
	return true;
	return false;
}
void sum2(int a,int b)
{
	cout<<a+b<<endl;
}
int main() {
	int a,b;
	cin>>a>>b;
	cout<<sum(a,b);
	cout<<sub(a,b);
cout<<multiplication(a,b);
cout<<sameNumber(a,b);
sum2(a,b);
return 0;
}
