#include <iostream>
using namespace std;

class Employee
{
    int Employee_id, basic_Salary;
    string employeeName;

public:
    void calculate(int id, int basic_Salary, string name)
    {
        this->basic_Salary = basic_Salary;
        this->Employee_id = id;
        this->employeeName = name;

        int DA = 0.25 * basic_Salary;
        int hra = 400;
        int I_tax = 0.15 * basic_Salary;

        int net_salary = basic_Salary + DA + hra - I_tax;
        display(net_salary);
    }

    void display(int net_salary)
    {

        cout << "AIRC salary slip" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Employee ID:\t" << Employee_id << endl;
        cout << "Name:\t" << employeeName << endl;
        cout << "Basic Salary: \t" << basic_Salary << endl;
        cout << "Net salary:\t" << net_salary << endl;
    }
};

int main()
{
    Employee E;
    E.calculate(1, 2000, "Shlok");
}