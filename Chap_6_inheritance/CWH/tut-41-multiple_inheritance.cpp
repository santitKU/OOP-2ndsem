#include<iostream>

using namespace std;

class Base1{
    protected:
        int base1int;
    public:
        void setbase1int(int a){
            base1int = a;
        }
};

class Base2{
    protected:
        int base2int;
    public:
        void setbase2int(int a){
            base2int = a;
        }
};

class Base3{
    protected:
        int base3int;
    public:
        void setbase3int(int a){
            base3int = a;
        }
    

};

class Derived: public Base1, public Base2, public Base3{
    public:
        void display(){
            cout<<"Value of base 1 is "<<base1int<<endl;
            cout<<"Value of base 2 is "<<base2int<<endl;
            cout<<"Value of base 3 is "<<base3int<<endl;
            cout<<"Sum of base 1, base 2 and base 3 is  "<<base1int+base2int+base3int<<endl;

        }
};




int main(){
    Derived d;
    d.setbase1int(5);
    d.setbase2int(6);
    d.setbase3int(3);
    d.display();

    return 0;
}