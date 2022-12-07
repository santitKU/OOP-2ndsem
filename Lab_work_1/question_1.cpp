/*Write a program that takes two integers from the user and prints the following:
    a.Sumofthetwonumbers
    b.Productofthetwonumbers
    c.First 5 even numbers*/
#include<iostream>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter Second number: "<<endl;
    cin>>b;
    // sum
    cout<<"Sum of the two number is: "<<a+b<<endl;
    // product
    cout<<"The product of the two number is: "<<a*b<<endl;
    // first five even number
    for (int i = 1; i <=10; i++)
    {
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    
    return 0;
}