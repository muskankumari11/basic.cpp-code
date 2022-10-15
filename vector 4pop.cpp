//popinvector
//onlinecompiler
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
				//front->return first element 
				cout<<"front"<<v.front()<<endl;
				//back->return back element
				cout<<"back"<<v.back()<<endl;

cout<<"before pop"<<endl;
for(int i:v){
	cout<<i<<endl;
	
}
v.pop_back();
cout<<"after pop"<<endl;
for(int i:v){
	cout<<i<<" ";
}
	return 0;
}
