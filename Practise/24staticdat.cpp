#include<iostream>

using namespace std;

class Employee{
    int  id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter id of employee";
            cin>>id;
        }
        void getData(void){
            cout<<"Id of the emplyee"<<count<<"is: ";
            cout<<id;
        }
};
int Employee::count;
int main(){
    Employee e, g, h;
    e.setData();
    e.getData();

    g.settData();
    g.getData();
    return 0;
}