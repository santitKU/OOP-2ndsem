/*1. Write two program examples showing the implementation of each of the
inheritance type.
a. Single Level Inheritance*/

#include<iostream>

using namespace std;

class Employee{
    protected:
    int emp_id, salary;
    public:
        void getData(int x, int y){
            emp_id = x;
            salary = y;
        }
       
};

class Programmer: public Employee{
    int total_salary;
    public:
        void setSalary(){
            total_salary = salary + 20000;
        }
         void display(){
            cout<<"Base salary is "<<salary<<endl;
            cout<<"Salary for level 3 programmer is "<<total_salary;
        }
        
};

int main(){
    Programmer p;
    p.getData(14, 15000);
    p.setSalary();
    p.display();
    return 0;
}