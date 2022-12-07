#include<iostream>

using namespace std;

class Room{
    public:
        int length;
        int breadth;
        int height;
        void getdata(){
            cout<<"Enter the length: ";
            cin>>length;
            cout<<"Enter the breadth: ";
            cin>>breadth;
            cout<<"Enter the height: "<<endl;
            cin>>height;
        }
};

class

int main(){
    Room r;
    r.getdata();
    return 0;
}