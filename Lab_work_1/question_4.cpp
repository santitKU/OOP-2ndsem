/*Write a function to increment the value of two numbers by 1 using references.*/
#include<iostream>

using namespace std;
void increament(int *a, int *b);
int main(){
    int x=4, y=5;
    cout<<"Before increament: "<<x<<", "<<y<<endl;
    increament(&x, &y);
    cout<<"After increament: "<<x<<", "<<y;
    return 0;
}

void increament(int *a, int *b){
    ++*a;
    ++*b;
}