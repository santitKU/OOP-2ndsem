#include<iostream>

using namespace std;

template<class x>
void swapargs(x &a, x &b){
    x temp;
    temp = a;
    a=b;
    b= temp;
}


int main(){
    int i=10, j=20;
    float x=10.5, y=15.5;
    cout<<"original values of i, j"<<i<<"\t"<<j<<endl;
    cout<<"original values of x, y"<<x<<"\t"<<y<<endl;
    swapargs(i, j);
    swapargs(x, y);
    cout<<"after swapargs the value of i,j= "<<i<<"\t"<<j<<endl;
    cout<<"after swapargs the value of x,y= "<<x<<"\t"<<y<<endl;

    return 0;
}