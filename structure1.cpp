//onlinecompiler
#include <iostream>
using namespace std;
struct employee
{
	//favchar='c';
	int uid;
	float sallary;
};
int main() {
	struct employee misskk;
	misskk.uid=100;
	misskk.sallary=1200000;
	cout<<"uid of employee"<<misskk.uid<<endl;
		cout<<"sallary of employee"<<misskk.sallary<<endl;
	//cout<<"favchar of employee"<<misskk.favchar<<endl;
	return 0;
}
