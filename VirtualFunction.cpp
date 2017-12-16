#include <iostream>
using namespace std;

class Animal
{
protected:
	int age;
public:
	//this makes animal an abstract class
	virtual void move() = 0; //pure virtual function
	//virtual void eat() = 0;
	//virtual void sleep() = 0;
	

};

class Bird : public Animal
{
public:
	void move()
	{
		cout << "fly" << endl;
	}

};

class Fish : public Animal
{
public:
	void move()
	{
		cout << "swim" << endl;
	}
};

class Cat : public Animal
{
public:
	void move()
	{
		cout << "run" << endl;
	}
};

class Base
{
public:
	void show()
	{
		cout << "Base" << endl;
	}
};

class Derv1 : public Base
{
public:
	virtual void show()
	{
		cout << "Derv1" << endl;
	}
};

class Derv2 : public Base
{
public:
	virtual void show()
	{
		cout << "Derv2" << endl;
	}
};

int main()
{
	/*
	Derv1 dv1;
	Derv2 dv2;

	dv1.show();
	dv2.show();

	Base* ptr;
	ptr = &dv1;
	ptr->show();

	ptr = &dv2;
	ptr->show();

	Base* ptrarray[3];

	ptrarray[0] = &dv2;
	ptrarray[1] = new Derv1();
	ptrarray[0] = &dv1;

	for (int i = 0; i < 3; i++)
	{
		ptrarray[i]->show();
	}

	delete ptrarray[1];
	*/

	Animal* ptrs[5];
	ptrs[0] = new Fish();
	ptrs[1] = new Cat();
	ptrs[2] = new Bird();
	ptrs[3] = new Fish();
	ptrs[4] = new Cat();

	for (Animal* ptr : ptrs)
	{
		ptr->move();
	}

	delete[] ptrs;

	
}