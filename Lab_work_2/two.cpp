#include<iostream>
#include<cmath>
using namespace std;

class distance{
    int x,y;
    public:
    void setdata(int x, int y){
        this->x = x;
        this->y = y;

    }
    float calculation(distance d){
        return sqrt(pow((x-d.x),2)+pow((y-d.y),2));
    }
};

int main(){
    class distance d1, d2;
    d1.setdata(4,5);
    d2.setdata(6,25);
    cout<<"Distance is "<<d1.calculation(d2);

}