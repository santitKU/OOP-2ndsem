/*Write a program that overload the following operators.
    a. Minus binary operator
    b. Post decrement operator
    c. Pre decrement operator*/

#include<iostream>

using namespace std;

class Opoverloading{
    int a;
    public:
        void setData(int a){
            this->a = a;
        }
        Opoverloading operator +(const Opoverloading& obj){
            Opoverloading temp;
            temp.a = a + obj.a;
        }
        Opoverloading operator --(){
            Opoverloading temp;
            temp.a = --a;
            return temp;
        }
        Opoverloading operator --(int){
            Opoverloading temp;
            temp.a = a--;
            return temp;
        }
        void display(){
            cout<<a<<endl;
        }
};

int main(){
    Opoverloading o1, o2, result;
    o1.setData(8);
    o2.setData(9);
    result = o1+o2;
    result.display();
    result = --o1;
    result.display();
    result  = o1--;
    result.display();
    return 0;
}