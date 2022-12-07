#include<iostream>

using namespace std;

class Maths{
    protected:
    float marksm;
};

class English{
    protected:
    float markse;
};

class Result: public Maths, public English{
    public:
    void setMarks(float x, float y){
        marksm = x;
        markse = y;
    }
    float calculateResult(){
        float result;
        result = (marksm+markse)/2;
        return result;
    }
    void display(){
        cout<<"Your result is "<<calculateResult()<<"%";
    }

};

int main(){
    Result r;
    r.setMarks(89.0, 98.9);
    r.calculateResult();
    r.display();
    return 0;
}