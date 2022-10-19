//onlinec compiler
//write a program to store and print roll number,name,age,marks of a student using structure
#include<iostream>
using namespace std;
struct student
{
	int roll_number;
	char name;
float marks;
int age;
};
int main()
{
	struct student ram;
	ram.name='ram';
	ram.roll_number=1;
	ram.age=12;
	ram.marks=425;
cout<<"name of student is"<<ram.name<<endl;
cout<<"roll_number of student is"<<ram.roll_number<<endl;
cout<<"age of student is"<<ram.age<<endl;
cout<<"marks of student is"<<ram.marks<<endl;
return 0;
}
