#include<iostream>

using namespace std;

class Polygon{
    protected:
        int width, height;
    public:
        void set_values(int a, int b){
            width =a;
            height = b;
        }
};

class Rectangle: public Polygon{
    public:
        int area(){
            return width*height;
        }
};

class Triangle: public Polygon{
    public:
        int area(){
            return width*height;
        }
};

int main(){
    Rectangle rect;
    Triangle trgi;
    Polygon *poly1 = &rect;
    Polygon *poly2 = &trgi;
    poly1->set_values(4, 5);
    poly2->set_values(4, 5);
    cout<<rect.area()<<endl;
    cout<<trgi.area()<<endl;
    return 0;
}