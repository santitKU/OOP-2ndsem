#include<iostream>

using namespace std;

class Base{
    public: 
        int m_id;
        Base(){
            m_id = 0;
            cout<<"Base"<<endl;
        }
        int getId()const{
            return m_id;
        }
};

class Derived:public Base{
    public:
        double m_const;
};

int main(){
    
}