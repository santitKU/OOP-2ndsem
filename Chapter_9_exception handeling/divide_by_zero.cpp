#include<iostream>

using namespace std;



int main(){
    int a=5, b=0, c;
    try{
        if(b==0){
            throw "Cannot divide by 0";
        }
        c = a/b;

    }
    catch(const char* e){
        cout<<"Exception occured "<<endl<<e;
    }
    return 0;
}