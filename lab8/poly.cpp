#include <iostream>
using namespace std;

class Shape
{
public:

    virtual double area() = 0;
};

class Rectangle : public Shape
{
private:

    double length;
    double width;

public:

    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double area()
    {
        return length * width;
    }
};

class Circle : public Shape
{
private:

    double radius;

public:

    Circle(double r)
    {
        radius = r;
    }

    double area()
    {
        return 3.142 * radius * radius;
    }
};

int main()
{
    Rectangle rect(10,5);

    Circle circle(7);

    Shape* ptr;

    ptr = &rect;

    cout << "Rectangle Area: " << ptr->area() << endl;

    ptr = &circle;

    cout << "Circle Area: " << ptr->area() << endl;

    return 0;
}