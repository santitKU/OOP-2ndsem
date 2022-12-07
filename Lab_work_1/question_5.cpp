/* Write a function to increment the value of two numbers by 1 without using references.*/

#include<iostream>

using namespace std;

int main(){
    int x=6, y=10;
    cout<<"Before increament: "<<x<<", "<<y<<endl;
    cout<<"After increament: "<<++x<<", "<<++y<<endl;   
    return 0;
}