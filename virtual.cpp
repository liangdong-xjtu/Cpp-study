#include <iostream>
using namespace std;
class Base {
public:
	Base(){}
public:
	virtual void print(){cout<<"Base"<<endl;}
};

class Derived:public Base {
public:
	Derived(){}
public:
	void print(){cout<<"Derived"<<endl;}
};

int main()
{
	Base *point=new Derived();
	point->print();
} 
