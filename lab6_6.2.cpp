// lab6_6.2

#include<iostream>
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
	void print() {
		cout << this->real << " + i*" << this->img <<
			endl;
	}
};

int main()
{
	Complex complex1(10, 5);
	Complex complex2(2, 4);
	Complex complex3 = complex1 + complex2;
	cout << "The sum between 10+i5 and 2+i4 is" << endl;
	complex3.print();

}