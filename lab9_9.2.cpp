#include <iostream>
#include<vector>
using namespace std;

class Vehicle {
public:
	virtual void start() = 0;
};

class Rocket : public Vehicle {
private:
	string name;
public:
	Rocket(string name) {
		this->name = name;
	}
	void start()
	{
		cout << "start " << name << " rocket" << endl;
	}
};

class Car : public Vehicle {
private:
	string name;
public:
	Car(string name) {
		this->name = name;
	}
	void start()
	{
		cout << "start " << name << endl;
	}
};

int main() {
	vector <Vehicle*>vehicule;
	vehicule.push_back(new Car("awesome car"));
	vehicule.push_back(new Car("red car"));
	vehicule.push_back(new Rocket("NASA"));
	for (auto element : vehicule) {
		element->start();
	}
}