#include<iostream>
using namespace std;

class Student
{
	public :
	string name;
	int age;
	string gender;

	Student()
	{
		cout<<"Constructor is called"<<endl;
	}
	Student(string n,int ag,string gen)
	{
		cout<<"Parametrized constructor is called"<<endl;
		name = n;
		age = ag;
		gender = gen;
	}	
	Student(Student &obj)
	{
		cout<<"Copy constructor is called"<<endl;
		name = obj.name;
		age = obj.age;
		gender = obj.gender;
	}

	void print()
	{
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<gender<<endl;
	}
	~Student(){
		cout<<"destructor is called"<<endl;
	}

	int operator == (Student ab)
	{
		if(name == ab.name && age ==ab.age && gender == ab.gender)
			return 1;
		return 0;
	}
};

//Single level Inheritance

class Animal
{
	public :

		void eat()
		{
			cout<<"Animal can eat"<<endl;
		}
};
class Diman : public Animal
{
	public :
	void diman()
	{
		cout<<"I am diman"<<endl;
	}
};

class Water{
	public :
	void water()
	{
		cout<<"Water is a life for fish"<<endl;
	}
};
class Fish : public Animal
{
public:
	void swim()
	{
		cout<<"fish can swim"<<endl;
	}
};

// Multi level Inheritance
class Shark : public Fish
{};

//Multiple Inheritance
class Dolphin : public Animal,public Water
{
	public :
	void dolphin()
	{
		cout<<"Dolphin is the king of fish"<<endl;
	}
};
//Hybrid Inheritance

class Well : public Dolphin
{};
//Hierarchical Inheritance
class Diman2 : public Diman
{};

//PolyMorphism 
//compile time Polymorphism
class FuncOverloading
{
	public :
		int sum(int a,int b)
		{return a+b;}
		float sum(float a,float b)
		{return a+b;}
		int sum(int a,int b,int c)
		{return a+b+c;}
};
class OperatorOverloading
{
	private :
	int img;
	int real;
	public :
	OperatorOverloading(int a = 0,int b=0)
	{
		img = a;
		real = b;
	}

	OperatorOverloading operator + (OperatorOverloading const &obj)
	{
		OperatorOverloading ob2;
		ob2.img = img+obj.img;
		ob2.real = real+obj.real;
		return ob2;
	}

	void display()
	{
		cout<<img<<" + i"<<real<<endl;
	}
};

class Base
{
	public :
	virtual void fun()
	{
		cout<<"Base class fun "<<endl;
	}
	void display()
	{
		cout<<"Base class display"<<endl;
	}
};
class Drived : public Base
{
	public :
	void fun()
	{
		cout<<"Drived class fun"<<endl;
	}
	void display()
	{
		cout<<"Drived class display"<<endl;
	}
};
int main()
{
//run time polymorephism
		Drived drive;
		Base* driver = & drive;
		(*driver).fun();
		(*driver).display();
		drive.fun();
		drive.display();
//compile time polymorephism
	// OperatorOverloading a(2,3),b(2,3);
	// OperatorOverloading c = a+b;
	// c.display();
//function overloading
	// FuncOverloading funO;
	// cout<<funO.sum(2,3)<<endl;
	// cout<<funO.sum(2.2f,3.2f)<<endl;
	// cout<<funO.sum(2,3,3)<<endl;

//Hierarchical Inheritance
	// Diman2 di;
	// di.diman();

//Hybrid Inheritance
	// Well well;
	// well.eat();
	// well.water();
	// well.dolphin();

//Multiple Inheritance
	// Dolphin dol;
	// dol.eat();
	// dol.water();

//Multilevel Inheritance
	// Shark shark1;
	// shark1.swim();

//single level Inheritance
	// Fish shark;
	// shark.eat();

	// Student s;
	// Student s2("rahul",20,"male");
	// Student s3 = s2;

	// s2.print();
	// s3.print();

	// if(s2==s3)
	// 	cout<<"same"<<endl;
	// else 
	// 	cout<<"not same"<<endl;

	// for(int i=0; i<3; i++)
	// {
	// 	cin>>s[i].name;
	// 	cin>>s[i].age;
	// 	cin>>s[i].gender;
	// }

	// for(int i=0; i<3; i++)
	// 	s[i].print();

}
