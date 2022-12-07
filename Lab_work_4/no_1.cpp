/*Define a class, Vector, which represents either a column vector or a row
vector. A column (row) vector is a matrix consisting of a single column
(row) of m elements. Let m = 3 in this program. (Use three member
variables instead of an array.)
Overload the unary minus operator to negative all the elements in the vector.
For example, if a = [2 -5 6] is a row vector, then -a must return [-2 5 -6].*/

#include<iostream>

using namespace std;

class Vector{
    int a, b, c;
    public:
        Vector(int a, int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
        void operator -(){
            a = -a;
            b = -b;
            c = -c;
        }
        void display(){
            cout<<"["<<a<<","<<b<<","<<c<<"]";
            cout<<endl;
        }
};

int main(){
    Vector v1(2,-3,4);
    v1.display();
    -v1;
    v1.display();
    // v1.display;

    return 0;
}