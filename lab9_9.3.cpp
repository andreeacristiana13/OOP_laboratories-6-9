#include <iostream>
#include <string>
#include <list>
using namespace std;

class Shape{
public:
	virtual void draw() = 0; // we define the general behavior
	virtual double getArea() {
		return -1;
	}
	//virtual double getArea() = 0; is pure virtual
};

class Circle : public Shape{
private:
	int radius;
public:
	Circle(int radius) {
		this->radius = radius; 
	}
	double getArea() {
		cout << "Circle getArea() " << endl;
		return 3.14 * this->radius * this->radius;
	}
	void draw() { cout << "circle\n"; } // we specify the behavior for this shape
};

class Triangle : public Shape{
private:
	int height;
	int side; //latura
public:
	Triangle(int height, int side) {
		this->height = height;
		this->side = side;
	}
	double getArea() {
		cout << "Triangle getArea() " << endl;
		return (height * side) / 2;
	}
	void draw() { cout << "triangle \n"; } // we specify the behavior for this shape
};

class Square : public Shape {
private:
	int side;
public:
	Square(int side) {
		this->side = side;
	}
	double getArea() {
		cout << "Square getArea() " << endl;
		return side * side;
	}
	void draw() { cout << "square\n"; } // we specify the behavior for this shape
};

class Drawing{
public:
	list <Shape*> pShapeList;
	Drawing(list<Shape*> pShape) {
		this->pShapeList = pShape;
	}
	void drawShape() // we draw the Shape. Any extension of Shape with draw() implemented.
		// An instance of Shape is injected in the drawShape method
	{
		for (Shape* shape : this->pShapeList) {
			shape->draw();
		}
	}

	void displayArea()
	{
		for (Shape* shape : this->pShapeList) {
			cout << shape->getArea() << endl;
		}
	}
};
int main()
{
	list<Shape*> shapelist;
	shapelist.push_back(new Triangle(5,7));
	shapelist.push_back(new Circle(4));
	shapelist.push_back(new Square(6));

	Drawing* d = new Drawing(shapelist);
	d->drawShape();
	d->displayArea();

}