#include<iostream>

using namespace std;

class Base{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base:: setData(void){
    data1=10;
    data2 = 30;

}

int Base:: getData1(){
    return data1;
}
int Base:: getData2(){
    return data2;
}


class Derived: public Base{
    int data3;
    public:
        void process(){
            data3 = data2*getData1();
        };
        void display(){
            cout<<"Value of data 1 is "<<getData1()<<endl;
            cout<<"Value of data 2 is "<<data2<<endl;
            cout<<"Value of data 3 is "<<data3<<endl;
        };
};

int main(){
    Derived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}