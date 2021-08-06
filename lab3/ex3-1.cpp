#include<iostream>
using namespace std;

int main()
{
	char p1;
	char p2;
	cout << "Enter s, r, p for player 1:" << endl;
	cin >> p1;
	if (p1 != 's' && p1 != 'r' && p1 != 'p')
	{
		cout << "bye" << endl;
		return 0;
	}
	cout << "Enter s, r, p for player 2:" << endl;
	cin >> p2;
	if (p2 != 's' && p2 != 'r' && p2 != 'p')
	{
		cout << "bye" << endl;
		return 0;
	}	
	if (p1 == 's' && p2 == 'r')
	    cout << "Player2 win!" << endl;
	else if (p1 == 's' && p2 == 'p')
	    cout << "Player1 win!" << endl;
	else if (p1 == 'p' && p2 == 's')
	    cout << "Player2 win!" << endl;
	else if (p1 == 'p' && p2 == 'r')
	    cout << "Player1 win!" << endl;
	else if (p1 == 'r' && p2 == 'p')
	    cout << "Player2 win!" << endl;
	else if (p1 == 'r' && p2 == 's')
	    cout << "Player1 win!" << endl;
	else
	    cout << "Two players tie!\n";


}
