#include<iostream>

using namespace std;

class Base{
    protected:
    int x,y;
    public:
        void setValue(int x, int y){
            this->x = x;
            this->y = y;
        }
};

class Derived1:public Base{
    public:
        void addNumber(){
            cout<<"Sum of number is "<<x+y;
        }
};

class Derived2: public Base{
    public:
        void product(){
            cout<<"Product of number is "<<x*y;
        }
};

int main(){
    Derived1 d1;
    d1.setValue(6,8);
    d1.addNumber();
    Derived2 d2;
    cout<<endl;
    d2.setValue(2, 5);
    d2.product();
    return 0;
}