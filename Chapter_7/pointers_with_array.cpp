#include<iostream>

using namespace std;


int main(){
    int numbers[10], *ptr;

    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter element "<<i+1<<endl;
        cin>>numbers[i];
    }
    ptr=numbers;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Element "<<i+1<<": "<<*ptr<<endl;
        ptr++;
    }
    
    

    return 0;
}