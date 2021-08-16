#include <iostream>
using namespace std;
#include "ex6-2.h"

//二三行的順序很重要若把第三放在第二，他會讀不到namespace

void rec( );

//cout.setf(ios::fixed);
//cout.setf(ios::showpoint);
//cout.precision(3);

int main()
{
    int peri;
    while(1)
    {
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3);
        cout << "1.Rectangular 2.Square 3.Circle 4.Exit" << endl;
        cout << "Choose the type of perimeter you want to calculate:" << endl;
        cin >> peri;
        switch(peri)
        {
            case 1:
                rec( );
                break;
            case 2:
                squ( );
                break;
            case 3:
                cir( );
                break;
            case 4:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Please follow the instruction carefully." << endl;
                break;
        }
    }
}

