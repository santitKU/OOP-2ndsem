#include<iostream>

using namespace std;
template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2;
    return avg;
}


template<class T1, class T2>
void swapp(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    // float a;
    int a=5;
    int b = 7;
    // a = funcAverage(5, 7);
    // printf("The average of these numbers is %f\n\n", a);
    swapp(a, b);
    cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
    return 0;
}