#include<iostream>

using namespace std;
template<class T>
class mytemp{
    private:
        T a,b,c;
        public:
            void getdata(){
                cout<<"Enter first value: ";
                cin>>a;
                cout<<"Enter second value: ";
                cin>>b;
                cout<<endl;
            }
            void total(){
                c = a+b;
                cout<<"Total value is "<<endl;
                cout<<endl;
            }
};

int main(){
    mytemp <int> obj1;
    mytemp <float> obj2;
    cout<<"Enter two integers: "<<endl;
    obj1.getdata();
    obj1.total();
    cout<<"Enter two floats: "<<endl;
    obj2.getdata();
    obj2.total();
    

    return 0;
}