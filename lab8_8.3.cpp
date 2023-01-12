// lab8_8.3.cpp 

#include <iostream>
#include <string>
#include <list>
using namespace std;

class Person {
public:
	string name;
	int age;
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
};

class Car {
public:
	string brand;
	int age;
	Car(string brand, int age) {
		this->brand = brand;
		this->age = age;
	}
};

template <class T>
class Average_Age {
public:
	static double Compute_Average_Age(const list<T>& items) {

		double sum = 0.0;
		for (const T& obj : items) {
			sum = sum + obj.age;
		}
		return sum / items.size();
	}
};

int main() {

	list <Person> people = { Person("Bianca", 20), Person("Darius", 21), Person("Denis", 31) };
	list <Car> cars = { Car("Audi", 10), Car("BMW", 13), Car("Toyota", 7) };

	//The average age of Person 
	double people_average = Average_Age<Person>::Compute_Average_Age(people);
	cout << "Average age of people : " << people_average << endl;

	//The average age of Car 
	double cars_average = Average_Age<Car>::Compute_Average_Age(cars);
	cout << "Average age of cars: " << cars_average << endl;

	return 0;
};