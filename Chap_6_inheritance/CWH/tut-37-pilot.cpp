#include<iostream>

using namespace std;

class Employee{
    public:
    int id;
    float salary;
    Employee(int inpid){
        id = inpid;
        salary = 34.0;
    }
    Employee(){}
};

class Programmer:public Employee{
    public:
    int languageCode;
    Programmer(int inpid){
        id = inpid;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main(){
    Employee santit(1), sid(2);
    cout<< santit.salary<<endl;
    cout<< sid.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    // cout<<skillF.id;
    skillF.getData();

    return 0;
}