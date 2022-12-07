/*Write a function to swap two numbers using references.*/

#include<iostream>

using namespace std;

void swap_number(int *a, int *b);

int main(){
    int x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Numbers before swap: "<<x<<", "<<y<<endl;
    swap_number(&x, &y);
    cout<<"Numbers after swap: "<<x<<", "<<y<<endl;
    return 0;
}

void swap_number(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}