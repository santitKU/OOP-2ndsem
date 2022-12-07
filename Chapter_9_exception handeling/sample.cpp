#include <iostream>

using namespace std;

int main()
{
    cout << "start!!" << endl;
    try
    {
        cout << "Inside try block:" << endl;
        throw 10;
        // Throws and error
        cout << "This will now execute";
    }
    catch (int i)
    { // catch an error
        cout << "caught one! number is: ";
        cout << i << endl;
    }
    cout << "Endl!";
    return 0;
}