#include<iostream>
using namespace std;

class Student
{
	public :
	string name;
	int age;
	bool gender;
};
int main()
{

	Student s1;
	s1.name = "Tim";
	s1.age = 20;
	s1.gender = 0;

	cout<<s1.name<<endl;
	cout<<s1.age<<endl;
	cout<<s1.gender<<endl;
}