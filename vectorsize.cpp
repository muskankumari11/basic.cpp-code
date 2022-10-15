//printsizein vector
//online compiler
	#include <iostream>
#include<vector>
using namespace std;

int main() {
	vector<int>v;
	cout<<"size->"<<v.capacity()<<endl;
	v.push_back(1);
		cout<<"size->"<<v.capacity()<<endl;
		v.push_back(2);
			cout<<"size->"<<v.capacity()<<endl;
			//here in output we saw size doubled
			v.push_back(3);
				cout<<"size->"<<v.capacity()<<endl;
				//size means size of element
				//capacity means how much space assigned for elements
	return 0;
}
