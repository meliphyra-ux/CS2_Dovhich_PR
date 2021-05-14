#pragma once
#include <iostream>
using namespace std;

class Children
{
private:
	string name;
	string surname;
	int age;
public:
	Children()
	{
		surname = " ";
		name = " ";
		age = 0;

	};
	Children(string _name, string _surname, int _age)
	{
		name = _name;
		surname = _surname;
		age = _age;
	}
	void setAge(int _age)
	{
		age = _age;
	}
	void setSurname(string _surname)
	{
		surname = _surname;
	}
	void setName(string _name)
	{
		name = _name;
	}

	int getAge()
	{
		return age;
	}
	string getSurname()
	{
		return surname;
	}
	string getName()
	{
		return name;
	}

	void getData()
	{
		cout << "There is data of objects:\nName:" << name << "\nAge: " << age << "\nSurname: " << surname << endl;
	}

	void setData(Children child)
	{

		cout << "Input data of objects:\n " << endl;
		cin >> name;
		child.setName(name);

		cin >> age;
		child.setAge(age);

		cin >> surname;
		child.setSurname(surname);
	}

};