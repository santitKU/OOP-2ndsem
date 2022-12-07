#include<iostream>

using namespace std;

inline int product(int x, int y){
    return x*y;
}

int main(){
    int a, b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"Product of the number is: "<<product(a,b);   
    return 0;
}