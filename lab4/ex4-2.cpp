#include<iostream>
using namespace std;
int main()
{
	int value;
	int flag = 0;
	cout << "Enter an integer value:\n";
	cin >> value;
	cout << "All prime numbers below " << value << " are:" << endl;
	if (value > 2)
		cout << "2  ";
	for(int i =3; i <= value ; i++)
	{
	    for(int j =2; j < i; j++ )
		if (i % j == 0)
		{
		    flag = 0;
		    break;
		}
		else
		      	flag = 1;	
	    if (flag == 1)
	    {
	        cout << i << "  ";
		flag = 0;
	    }

	}
	cout << "\n";
}

