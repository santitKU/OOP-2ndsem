/*3. Write a program showing the use of friend function in overloading binary
operator.*/
#include<iostream>

using namespace std;

class Opoverloading{
    int a, b;
    friend Opoverloading operator +(Opoverloading obj1,  ){
        Opoverloading temp;
        temp.a = a+obj.b;
        return temp;
    }
    public:
        void setData(int a, int b){
            this->a = a;
            this->b = b;
        }

};

int main(){
    Opoverloading x, y;
    x.
    return 0;
}