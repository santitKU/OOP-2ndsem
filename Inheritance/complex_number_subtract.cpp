#include<iostream>

using namespace std;

class Complex{
    float real;
    float img;
    public:
        Complex(){
            real = 0;
            img = 0;
        }
        void input(){
            cout<<"Enter real and imaginary part respectively: ";
            cin>>real>>img;
        }
        Complex operator -(Complex obj){
            Complex temp;
            temp.real = real+obj.real;
            temp.img = img + obj.img;
        }
        void output(){
            cout<<"Output Complex Number "<<real<<"+"<<img<<"i";
        }
};

int main(){
    Complex c1,c2,c3;
    cout<<"Enter first complex number: "<<endl;
    c1.input();
    cout<<"Enter second complex number: "<<endl;
    c2.input();
    cout<<"Enter third complex number: "<<endl;
    c3.input();
    

    return 0;
}