#include <iostream>
#include <vector>
using namespace std;

class Animal {
public:
	virtual string getName() = 0;// can be just virtual, without pure
	virtual void chase(Animal* animal) = 0;
};

class Mouse : public Animal {
private:
	string name;
public:
	Mouse(string name) {
		this->name = name;
	}
	string getName() {
		return this->name + " as " + typeid(this).name();
	}
	void chase(Animal* animal) {
		cout << "Me, " + this->getName() + " I chase " + animal->getName() << endl;
	}
};

class Cat : public Animal {
private:
	string name;
public:
	Cat(string name) {
		this->name = name;
	}
	string getName() {
		return this->name + " as " + typeid(this).name();
	}
	void chase(Animal* animal) {
		cout << "Me, " + this->getName() + " I chase " + animal->getName() << endl;
	}
};

class Dog : public Animal {
private:
	string name;
public:
	Dog(string name) {
		this->name = name;
	}
	string getName() {
		return this->name + " as " + typeid(this).name();
	}
	void chase(Animal* animal) {
		cout << "Me, " + this->getName() + " I chase " + animal->getName() << endl;
	}
};

int main() {
	vector<Animal*> animalsChasingList;
	animalsChasingList.push_back(new Cat("Old Tom"));
	animalsChasingList.push_back(new Cat("Rusty"));
	animalsChasingList.push_back(new Mouse("Rodent"));
	animalsChasingList.push_back(new Cat("Tom"));
	for (int animalIndex = 0; animalIndex < animalsChasingList.size() - 1; animalIndex++) {
		animalsChasingList.at(animalIndex)->chase(animalsChasingList.at(animalIndex + 1));
	}

	cout << endl << "New hunter in town !" << endl;
	Mouse* hunter = new Mouse("Tiny");
	for (int animalIndex = 0; animalIndex < animalsChasingList.size(); animalIndex++) {
		hunter->chase(animalsChasingList.at(animalIndex));
	}

	cout << endl << "New Dogs in town !" << endl;
	animalsChasingList.push_back(new Dog("Rex"));
	animalsChasingList.push_back(new Dog("Max"));
	for (int animalIndex = 0; animalIndex < animalsChasingList.size() - 1; animalIndex++) {
		animalsChasingList.at(animalIndex)->chase(animalsChasingList.at(animalIndex + 1));
	}
	return(0);
}