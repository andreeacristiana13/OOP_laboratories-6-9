// lab7 7.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
using namespace std;

class Wheel {
public:
	int size;
};

class Vehicle {
public:
	void removeWheel(Wheel wheel) {
		// remove if found in list
	}
	void replaceWheel(Wheel wheelToRemove, Wheel wheeltoReplace) {
		this->removeWheel(wheelToRemove);
		// add new wheel in list
	};
};

class Hummer : public Vehicle {
private:
	class WheelHummer : public Wheel {
		
	};
	list<WheelHummer*> wheelhummer;
public:
	void replaceWheel(Wheel wheelToRemove, Wheel wheeltoReplace) {
		// check if is HummerWheel first
		Vehicle::replaceWheel(wheelToRemove, wheeltoReplace);
	};
};

class Carriage : public Vehicle {
private:
	class WheelCarriage : public Wheel {
		
	};
	list<WheelCarriage*> wheelcarriage;
public:
	void replaceWheel(Wheel wheelToRemove, Wheel wheeltoReplace) {
		// check if is carriage wheel
		Vehicle::replaceWheel(wheelToRemove, wheeltoReplace);

	};
};



int main()
{
   


}

