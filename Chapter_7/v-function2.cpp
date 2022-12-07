#include<iostream>

using namespace std;

class Enemy{
    protected:
        int attackPower;
    public:
        void serAttackPower(int a){
            attackPower=a;
        }
        virtual void attack(){
            cout<<"I am enemy attack";
        }
};

class Ninja: public Enemy{
    public:
        void attack(){
            cout<<"I am Ninja and i am chopping you with "<<attackPower<<" power."<<endl;
        }
};

class Monster: public Enemy{
    public:
        void attack(){
            cout<<"I am Monster and I am eating you with "<<attackPower<<" power."<<endl;
        }
}

int main(){
    Ninja n;
    Monster m;
    Enemy *Enemy1=&n;
    Enemy *Enemy2=&m;
    Enemy1->setAttackPower(Power(100));
    return 0;
}