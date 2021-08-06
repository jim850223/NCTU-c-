#include<iostream>
using namespace std;

int main()
{
    char type;
    int price;
    int num;
    cout << "Welcome to the book-buying system!!\n";
    cout << "The following are the list and the cost:\n";
    cout << "(A) Computer Science: An Overview\t$30\n";
    cout << "(B) Absolute C++\t$20\n";
    cout << "(C) C++ How to Program\t$40\n";
    cout << "Please enter A, B, C to choose the book:\n";
    cin >> type;
    switch(type)
    {
	case 'A':
	    price = 30;
	    break;
        case 'B':
	    price = 20;
	    break;
	case 'C':
	    price = 40;
	    break;
	case 'a':
	    price = 30;
	    break;
        case 'b':
	    price = 20;
	    break;
	case 'c':
	    price = 40;
	    break;
 	default:
	    cout << "Sorry, item (" << type << ") doesn't on our list" << endl; 
	    return 0;
    }

    cout << "Now enter the quantity of books" << endl;
    cin >> num;
    int tot = price * num;
    cout << "The total cost of item (" << type << ") is $" << tot <<". Thanks for your coming.\n";

}
