//moreaboutcapacity
//indexprinting
//online compiler
#include <iostream>
#include<vector>
using namespace std;

int main() {
	vector<int>v;
	cout<<"capacity->"<<v.capacity()<<endl;
	v.push_back(1);
			cout<<"capacity->"<<v.capacity()<<endl;

		v.push_back(2);
				cout<<"capacity->"<<v.capacity()<<endl;
			v.push_back(3);

				cout<<"capacity->"<<v.capacity()<<endl;
				//sizeprint
				cout<<"size->"<<v.size()<<endl;
				//indexprinting
				cout<<"element at 2nd index"<<v.at(2)<<endl;
	return 0;
}
