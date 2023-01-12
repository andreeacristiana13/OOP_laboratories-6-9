// lab6_6.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<math.h>
using namespace std;


class Complex {
private:
	double real, img;
public:	
	Complex(double real = 0, double img = 0) {
		this->real =
			real; this->img = img;
	}

	// < operator overloading
	Complex operator < (Complex const& obj) {
		float nr1 = sqrt(this->real * this->real + this->img * this->img);
		float nr2 = sqrt(obj.real * obj.real + obj.img * obj.img);
		Complex result;
		if (nr1 < nr2) {
			return *this;
		}

		return obj;
	}

	void print() {
		cout << this->real << " + i*" << this->img <<
			endl;
	}

};

int main()
	{
		Complex c1(10, 5);
		Complex c2(2, 4);
		Complex c5 = c1 < c2;
		c5.print();
	}