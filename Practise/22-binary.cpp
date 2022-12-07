#include<iostream>
#include<string>

using namespace std;

class binary{
    private:
    string s;

    public:
        void read(void);
        void chk_bin(void);
        void ones(void);
        void display(void);
};

void binary:: read(void){
    cout<<"Enter Binary"<<endl;
    cin>>s;
}

void binary:: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Invalid Binary"<<endl;
            exit(0);
        }
    }
    
}

void binary :: ones(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else if(s.at(i)=='1'){
            s.at(i)='0';
        }
    }
    
}

void binary :: display(void){
    cout<<"Ones compliment"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
        }
    }
    


int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.ones();
    b.display();
    return 0;
}