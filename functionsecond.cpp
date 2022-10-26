//evennumber
#include <iostream>
using namespace std;
bool evennumber(int n){
if(n%2==0)
return true;
return false;
}
int main() {
	int a,b;
	cin>>a>>b;
	cout<<evennumber(4);
	return 0;
}
