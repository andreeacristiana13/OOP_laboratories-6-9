// Lab 6 exercise T.6.1 

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

	// + operator overloading
	Complex operator + (Complex const& obj) {
		Complex result;
		result.real = this->real + obj.real;
		result.img = this->img + obj.img;
		return result;
	}

	// ^ operator overloading
	Complex operator ^ (int power) {
		Complex result;
		result.real = this->real * this->real - this->img * this->img;
		result.img = this->real * this->img + this->img * this->real;
		return result;
	}

	// ~ operator overloading
	float operator ~ () {
		return sqrt(this->real * this->real + this->img * this->img);
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
		Complex c3 = c1 + c2;
		Complex c4 = c1 ^ 2;
		cout << "The module of the second complex number is " << endl;
		float numar = ~c2;
		cout << numar << endl;
		cout << "\n The sum of the two complex numbers is " << endl;
		c3.print();
		cout << "\n The first complex number power 2 is " << endl;
		c4.print();
}