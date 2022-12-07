#include<iostream>

using namespace std;

class A{
    public:
        A(){
            cout<<"A"<<endl;
        }
        ~A();
};

class B:public A{
    public:
    B(){
        cout<<"B";
    }
    ~B();
};

class C:public A{
    public:
    C(){
        cout<<"C";
    }
    ~C();
};

int main(){
    cout<<"Constructing: A"<<endl;
    class A a;
    cout<<"Constructing B"<<endl;
    class B cB;
    cout<<"Constructing C"<<endl;
    class B cC;
    return 0;

    return 0;
}