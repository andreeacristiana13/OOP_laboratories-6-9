// lab9_9.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <list>

using namespace std;
class Shape
{
public:
	virtual void draw() = 0; // we define the general behavior
};
class Circle : public Shape
{
public:
	void draw() { cout << "circle\n"; } // we specify the behavior for this shape
};
class Triangle : public Shape
{
public:
	void draw() { cout << "triangle\n"; } // we specify the behavior for this shape
};

class Drawing
{
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
	/* Doesn't work. Why ? Try to use this code
	void drawShape(Shape pShape)
	{
	pShape->draw();
	}
	*/
};
int main()
{
	list<Shape*> shapelist;
	shapelist.push_back(new Triangle());
	shapelist.push_back(new Circle());
	Drawing* d = new Drawing(shapelist);
	d->drawShape();
	/*
	d->drawShape(new Circle());
	Drawing e;
	e.drawShape(new Triangle());
	e.drawShape(new Circle());
	Drawing f;
	Triangle t1;
	Circle c1;
	f.drawShape(&t1);
	f.drawShape(&c1);
	*/

}