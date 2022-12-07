#include<iostream>

using namespace std;

int main(){
    int StudentAge;
    try{
        cout<<"Student age: ";
        cin>>StudentAge;
        if(StudentAge<0)
            throw "Positive Number Required";
            cout<<"\nStudent Age: "<<StudentAge<<endl<<endl;
    }   
    catch(const char* Message){
        cout<<"Error: "<<Message;
    }
    cout<<endl;
    
    return 0;
}