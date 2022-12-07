#include<iostream>

using namespace std;

class Coordinate{
    private:
        int x,y,z;
    public:
        void setCoordinate(int a, int b, int c){
            x=a;
            y=b;
            z=c;
        }
        void showDim(){
            cout<<"x"<<x<<"y "<<y<<"z "<<z<<endl;
        }
};

int main(){
    Coordinate *p, cor;
    p=&cor;
    p->setCoordinate(3, 6, 4);
    cor.showDim();
    return 0;
}