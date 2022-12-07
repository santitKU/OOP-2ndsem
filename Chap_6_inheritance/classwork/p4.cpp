#include<iostream>

using namespace std;

class Point{
    protected:
        double x, y;
    public:
        Point(){
            x=0;
            y=0;
        }
};

void print(){
    cout<<"("<<x<<", "<<y<<")";
}
int main(){
    
    return 0;
}