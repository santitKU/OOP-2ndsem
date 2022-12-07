#include<iostream>

using namespace std;



int main(){
    double Operand1, Operand2, Result;
    cout<<"This program allows you to perform a division of two numbers."<<endl;
    cout<<"To proceed, enter two numbers. "<<endl;
    try{
        cout<<"First Number";
        cin>>Operand1;
        cout<<"Second Number: ";
        cin>>Operand2;
        if(Operand2==0)
        throw"Division by zero not allowed";
        Result = Operand1/Operand2;
        cout<<endl<<Operand1<<"/"<<Operand2<<"="<<Result<<endl<<endl;

    }
    catch(const char* str){
        // Display a string message accordingly
        cout<<endl<<"Bad Operator: "<<str;
    }
    return 0;
}