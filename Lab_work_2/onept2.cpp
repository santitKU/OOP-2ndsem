#include<iostream>

class Employee{
    int Employee_id, basic_salary;
    string employee_name;
    public:
        void calculate(int basic_salary){
            int DA, hra, i_tax;
            DA = 0.25*basic_salary;
            int hra = 400;
            int i_tax = 0.15*basic_salary;
            int net_salary= basic_salary+DA+hra-i_tax;
            display(net_salary, employee_name);
        }
        void display(int salary, string name){
            cout<<"Total salary of employee named "<<name<<"is "<<calculate(basic_salary);
        }
};

using namespace std;

int main(){
    class Employee e1;
    e1.calculate(45000, "Santit");
    return 0;
}