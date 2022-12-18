#include<iostream>

using namespace std;

class Test{
    int a;
    int b;
    public:
        Test(int i, int j): a(i), b(j){
            cout<<"Constructor initialized"<<endl;
            cout<<"Value of a and b is "<<a<<" "<<b<<endl;
        }
};

int main(){
    Test t(4, 5);
    return 0;
}