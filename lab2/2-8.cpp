#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float a;
	cout << "Please enter the base floating-point number:" << endl;
	cin >> a;
	cout << "10 to the power of 1, 2, 3 and 4 are :\n";
	float b = a;
	for (int i = 1; i <= 4; i++)
	{
	    cout << showpoint << fixed << setprecision(3) << setw(12) << a << endl;
            a *= b;	
	}
}
