#include<iostream>

using namespace std;

int main(){
    int a=5;
    int *ptr = &a;
    int **p = &ptr;
    cout<<"Value of a is "<<**p;   
    return 0;
}