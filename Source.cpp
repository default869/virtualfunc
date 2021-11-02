#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Shape
{
public:
	Shape() {}
	virtual void Show(){}
	virtual void Save(){}
	virtual void Load(){}
	~Shape() {}
};

class Square:public Shape
{
private:
	int side;
	int x;
	int y;
public:
	Square(int x, int y, int side)
	{
		this->x = x;
		this->y = y;
		this->side = side;
	}
	virtual void Show()
	{
		cout << "Square: " << endl;
		cout << "Coordinates upper corner of square: (" << x << "; " << y << ")" << endl;
		cout << "Length of the side: " << side << endl;
		cout << endl;
	}
	virtual void Save()
	{
		ofstream square("square.txt", ios_base::app);
		square << x << endl;
		square << y << endl;
		square << side << endl << endl;
		square.close();
	}
	virtual void Load()
	{
		ifstream square("square.txt");
		square >> x;
		square >> y;
		square >> side;
		square.close();
	}
	~Square() {}
};

class Rectangle :public Shape
{
private:
	int x;
	int y;
	int longSide;
	int shortSide;
public:
	Rectangle(int x, int y, int longSide, int shortSide)
	{
		this->x = x;
		this->y = y;
		this->longSide = longSide;
		this->shortSide = shortSide;
	}
	virtual void Show()
	{
		cout << "Rectangle: " << endl;
		cout << "Coordinates upper corner of recangle: (" << x << "; " << y << ")" << endl;
		cout << "Length of the short side: " << shortSide << endl;
		cout << "Length of the long side: " << longSide << endl;
		cout << endl;
	}
	virtual void Save()
	{
		ofstream square("rectangle.txt", ios_base::app);
		square << x << endl;
		square << y << endl;
		square << longSide << endl;
		square << shortSide << endl << endl;
		square.close();
	}
	virtual void Load()
	{
		ifstream square("rectangle.txt");
		square >> x;
		square >> y;
		square >> longSide;
		square >> shortSide;
		square.close();
	}
	~Rectangle() {}
};

class Circle :public Shape
{
private:
	int radius;
	int x;
	int y;
public:
	Circle(int x, int y, int radius)
	{
		this->x = x;
		this->y = y;
		this->radius = radius;
	}
	virtual void Show()
	{
		cout << "Circle: " << endl;
		cout << "Coordinates of the center: (" << x << "; " << y << ")" << endl;
		cout << "Radius: " << radius << endl;
		cout << endl;
	}
	virtual void Save()
	{
		ofstream square("circle.txt", ios_base::app);
		square << x << endl;
		square << y << endl;
		square << radius << endl << endl;
		square.close();
	}
	virtual void Load()
	{
		ifstream square("circle.txt");
		square >> x;
		square >> y;
		square >> radius;
		square.close();
	}
	~Circle() {}
};

class Ellipse :public Shape
{
private:
	int x;
	int y;
	int longSide;
	int shortSide;
public:
	Ellipse(int x, int y, int longSide, int shortSide)
	{
		this->x = x;
		this->y = y;
		this->longSide = longSide;
		this->shortSide = shortSide;
	}
	virtual void Show()
	{
		cout << "Ellipse: " << endl;
		cout << "Coordinates upper corner of recangle: (" << x << "; " << y << ")" << endl;
		cout << "Length of the short side: " << shortSide << endl;
		cout << "Length of the long side: " << longSide << endl;
		cout << endl;
	}
	virtual void Save()
	{
		ofstream square("ellipse.txt", ios_base::app);
		square << x << endl;
		square << y << endl;
		square << longSide << endl;
		square << shortSide << endl << endl;
		square.close();
	}
	virtual void Load()
	{
		ifstream square("ellipse.txt");
		square >> x;
		square >> y;
		square >> longSide;
		square >> shortSide;
		square.close();
	}
	~Ellipse() {}
};

int main()
{
	Square square(0, 0, 0);
	Shape* temp = &square;
	temp->Load();
	temp->Save();
	temp->Show();

	Rectangle rectangle(0, 0, 0, 0);
	temp = &rectangle;
	temp->Load();
	temp->Save();
	temp->Show();

	Circle circle(0, 0, 0);
	temp = &circle;
	temp->Load();
	temp->Save();
	temp->Show();

	Ellipse ellipse(0, 0, 0, 0);
	temp = &ellipse;
	temp->Load();
	temp->Save();
	temp->Show();

	return 0;
}