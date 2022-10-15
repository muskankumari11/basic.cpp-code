//online compiler
#include <iostream>
#include<list>
using namespace std;

int main() {
	list<int>l;
l.push_back(1);
l.push_front(3);
//print
for(int i:l)
{
	cout<<i<<" ";
}

	// your code goes here
	return 0;
}
