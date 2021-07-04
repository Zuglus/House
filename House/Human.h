#pragma once
#include <iostream>
#include <string>

class Human
{
public:
	std::string* name;
	std::string* surname;
	int* age;

	Human(std::string name, std::string surname, int age)
		: name{&name}, surname{&surname}, age{&age}{}
	Human(const Human& human)
		: Human (*human.name, *human.surname, *human.age){}
	Human()
		: Human("", "", 0){}

	//~Human()
	//{
	//	std::cout << "Deleting object";
	//	delete name;
	//	delete surname;
	//	delete age;
	//}

	friend std::ostream& operator<<(std::ostream& out, const Human& human)
	{
		out << "Name: " << human.name << '\n'
			<< "Surname: " << human.surname << '\n'
			<< "Age: " << human.age << '\n' << '\n';

		return out;
	}

	friend std::istream& operator>>(std::istream& in, Human& human)
	{
		std::cout << "Name: ";
		in >> *human.name;
		std::cout << "Surname: ";
		in >> *human.surname;
		std::cout << "Age: ";
		in >> *human.age;

		return in;
	}
};