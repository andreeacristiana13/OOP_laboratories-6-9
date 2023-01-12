// lab8_8.2.cpp 

#include <iostream>
#include<cmath>
using namespace std;

class Complex {
public:
	double real, imag;
	Complex(double realI = 0, double imagI = 0) {
		real = realI;
		imag = imagI;
	}

	template <typename T>
	friend bool operator >(const Complex& x, T y)
	{
		return sqrt(x.real * x.real + x.imag * x.imag) > sqrt(y * y);
	}
};


int main()
{
	Complex z(3, 4);
	float f = 6.0;

	bool r = (z > f);

	if (r == 1)
		cout << "the complex number is greater than the float number" << endl;
	else
		cout << "the float number is greater than the complex number" << endl;

	return 0;
};
