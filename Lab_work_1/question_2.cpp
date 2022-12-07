/*Write a program to print the following pattern:
    a. 1111     b. 12345    c. 1        d. 5
       2222        12345       12          54
       3333        12345       123         543
       4444        12345       1234        5432
       5555        12345       12345       54321 */

#include<iostream>

using namespace std;

int main(){
    // a
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<i;
        }
        cout<<endl;
        
    }
    cout<<"----------";
    cout<<endl;
    // b
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<"----------";
    cout<<endl;
    // c
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
    cout<<"----------";
    cout<<endl;
    
    for (int j = 5; j >= 5; j--)
    {
        for (int i = 0; i < 5; i++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    
    
    
    
    
    return 0;
}

