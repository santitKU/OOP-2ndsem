/*Write a program to input 10 double precision floating pointnumbers from the user,store them in an array,and then compute mean and standard 
deviation of the array. */

#include<iostream>
#include<cmath>

using namespace std;



int main(){
    double a[9], mean, sd, sum=0,x;
    cout<<"Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        sum+=a[i];
    }
    mean = sum/10;
    for (int i = 0; i < 10; i++)
    {
        x=a[i]-mean;
    }
    sd = sqrt(pow(x, 2)/10-1);
    cout<<"Mean is: "<<mean<<", and standard deviation is: "<<sd<<endl;
    
    return 0;
}

