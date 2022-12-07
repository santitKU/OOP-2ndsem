/*Write a program implementing a class called Student having following datamembers and member functions:
Data members:
Name of the student
Array of the ID of the books the student has borrowed
Member functions:
getName() returns the name of the student
setName(string) sets the name of the student
issueBook(long) adds the ID of the book borrowed by the student to
the array of borrowed book’s ID
getIssuedBooks() returns the IDs of the borrowed books*/

#include <iostream>
using namespace std;

class Student
{
    string std_Name;
    long id[5];

public:
    int count = 0;
    void setName(string name)
    {
        std_Name = name;
    }
    string getName()
    {
        return std_Name;
    }
    void issueBook(long book_id)
    {
        if (count > 4)
        {
            cout << "Maximum book issued" << endl;
        }
        else
        {
            id[count] = book_id;
            count++;
        }
    }
    long *getissuedbooks()
    {
        return id;
    }
};

int main()
{
    class Student S;
    S.setName("Shlok");
    S.issueBook(101);
    S.issueBook(102);
    S.issueBook(103);
    S.issueBook(104);
    S.issueBook(104);
    S.issueBook(104);
    string name = S.getName();
    long *id = S.getissuedbooks();
    cout << name << endl
         << endl;
    int i = 0;
    for (i = 0; i < S.count; i++)
    {
        cout << id[i] << endl;
    }

    return 0;
}