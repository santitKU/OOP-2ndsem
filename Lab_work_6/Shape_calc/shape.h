#include <iostream>
#include<string>

using namespace std;

class Shape
{
protected:
    string shape_name;

public:
    Shape() {}
    Shape(string shape_name);
    virtual float area() = 0;
}; 

class Circle : public Shape
{
protected:
    int radius;

public:
    Circle();
        Circle(string shape_name, int);
    float area();
}; 

class Ellipse : public Shape
{
protected:
    int xradius;
    int yradius;

public:
    Ellipse();
        Ellipse(string shape_name, int x_radius, int y_radius);
    float area();
}; 

class Rectangle : public Shape
{
protected:
    float l;
    float b;

public:
    Rectangle() {}
    Rectangle();
    float area(string shape_name, float l, float b);
};