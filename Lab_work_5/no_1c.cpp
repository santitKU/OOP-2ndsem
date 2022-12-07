/*
Multiple inheritance
Make a class named Fruit with a data member to calculate the number of fruits in a basket. 
Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket. 
Print the number of fruits of each type and the total number of fruits in the basket.*/

#include<iostream>

using namespace std;

class Base1{
    protected:
    int a;
};
class Base2{
    protected:
    int b;
};

class Derived:public Base1, public Base2{
    public:
    void set_data(int a, int b){
        this->a =a;
        this->b = b;
    }
    int add_number(){
        int result;
        result = a+b;
        return result;
    }
};

int main(){
    Derived d;
    int result;
    d.set_data(7,8);
    result = d.add_number();
    cout<<"Sum is "<<result;
    return 0;
}