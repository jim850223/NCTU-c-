#include<iostream>
using namespace std;
 int main()
{
    //cout << ( 3 >  2 > 3) << endl;
    //cout << ( 3 >  2 ) << endl;
    int count;
	   
    do
    {
    	cout << "Enter the size of multiplication table(1~9):";
    	cin >> count;
	cout << endl;
    //	cout << (0<count<10) << endl;
	if((count>9) || count<1)
		cout << "The number shoud be an interger from 1 to 9" << endl;
    //}while((0<count<10) != 1);
    }while((count>9) || (count<1));
    
    for (int j = 1; j <= count; j++)
    {
        for (int k = 1; k <= count; k++)
	    {
	        cout << j <<" * "<< k <<" = " << j*k << "\t";
	    }
        cout << endl;
    
    }
}
