#include<iostream>

using namespace std;

class Base{
    public:
        virtual void print(){
            cout<<"Base function"<<endl;
        }
};

class Derived : public Base{
    public:
        void print(){
            cout<<"Derived Function"<<endl;
        }
};

int main(){
    Derived derived;
    //pointer of Base type that points to derived
    Base *base1 = &derived;  
    // Calls member function of Derived class
    base1->print();
    return 0;
}