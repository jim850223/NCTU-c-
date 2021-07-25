#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    int intResult;
    float fltResult;
    intResult = 7/3;
    fltResult = 7.0/3;
    cout << intResult << endl;
    cout << fltResult << endl;
    cout <<typeid(intResult).name() << endl;
    cout <<typeid(fltResult).name() << endl;
    intResult = int(12.6/3);
    fltResult = 12.6/3;
    cout << intResult << endl;
    cout << fltResult << endl;
    return 0;
}
