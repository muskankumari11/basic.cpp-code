//sort the string
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s1="aaaabbbbbccccdddd";
	sort(s1.begin(),s1.end());
	cout<<s1<<endl;
	return 0;
}
