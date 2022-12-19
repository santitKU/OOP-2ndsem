#include<iostream>

using namespace std;

template<class T>
void sortArray(T arr[], int n){
    T temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; i < n; j++)
        {
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    
}

int main(){
    int arr[5] = {4,6,3,2,9};
    int n = 5;
    sortArray<int>(arr, 5);
    for (int i = 0; i < n; i++)
    {
        cout<<"%d"<<endl;
    }
    
    return 0;
}