#include <iostream>
using namespace std;


void gcd_lcm(int input_1, int input_2);

int main()
{
   int a; int b;
   cout <<"Input Value"<< endl;
   cin >> a ;
   cout <<"Input Value2"<< endl;
   cin >> b ;
   gcd_lcm(a, b);
}


void gcd_lcm(int input_1, int input_2)
{
    int gcd;
    int lcm;
//    if (a == b)
//    {
//        gcd = a; lcm = a;
//    }
//反正我終究會在後面宣告gcd是什麼，所以這邊不用打
    //else 
    int a = input_1;
    int b = input_2;
    
    if (b > a)
    {
        int c = a;
	a = b;
	b = c;
    }
    while( b != 0)
    {
        int c = a % b; 
	a = b;
	b = c;   
    }
    gcd = a;
    lcm = (input_1 * input_2)/a;
    cout << "g.c.d.: " << gcd << endl;
    cout << "l.c.m.: " << lcm << endl;
}
