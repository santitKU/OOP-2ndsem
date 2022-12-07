/* Write a function (return type) to calculate the area of rectangle, square, circle and triangle by using the same function name 
using the concept of function overloading.*/

#include<iostream>
#include<cmath>
using namespace std;

int area(int s);
int area(int l, int b);
float area(float r);
float area(int a, int b, int c);

int main(){
    int side, length, breadth, a, b, c;
    float radius;
    cout<<"Enter side of square: ";
    cin>>side;
    cout<<"Area of square is: "<<area(side)<<endl;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>length>>breadth;
    cout<<"Area of rectangle is: "<<area(length, breadth)<<endl;
    cout<<"Enter radius of circle: ";
    cin>>radius;
    cout<<"Area of circle is: "<<area(radius)<<endl;
    cout<<"Enter sides of triangle: ";
    cin>>a>>b>>c;
    cout<<"Area of triangle is: "<<area(a, b, c)<<endl;
    return 0;
}
int area(int s){
    int area;
    area = pow(s, 2);
    return area;
}

int area(int l, int b){
    int area;
    area = l*b;
    return area;
}

float area(float r){
    float area, pi=3.14;
    area = pi*pow(r, 2);
    return area;
}

float area(int a, int b, int c){
    int s; 
    float area;
    s = (a+b+c)/2;
    area = float(sqrt(s*((s-a)*(s-b)*(s-c))));
    return area;
}