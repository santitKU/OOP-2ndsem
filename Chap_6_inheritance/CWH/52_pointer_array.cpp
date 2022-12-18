#include<iostream>

using namespace std;

class Shop{
    int id, price;
    public:
        void setData(int id, int price){
            this->id = id;
            this->price = price;
        }
        void getData(){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

int main(){
    Shop *ptr = new Shop[3];
    int p,q;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter id and price of item "<<i+1;
        cin>>p>>q;
        ptr->setData(p,q);
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<"Detail of item"<<i+1<<" is."<<endl;
        ptr->getData();
    }
    
    

    return 0;
}