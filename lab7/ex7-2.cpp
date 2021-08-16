#include <iostream>
using namespace std;

int gcd(int a, int b);

int main(void)
{
    int in1, in2, in3, in4, in5;
    int in12, in123, in1234, in12345;

    cout << "Input five integer number:" << endl;
    cin >> in1 >> in2 >> in3 >> in4 >> in5;
    
    in12 = gcd(in1, in2);
    int lcm12 = in1 * in2 / in12;
    in123 = gcd(lcm12, in3);
    int lcm123 = lcm12 * in3 / in123;
    in1234 = gcd(lcm123, in4);
    int lcm1234 = lcm123 * in4 / in1234;
    in12345 = gcd(lcm1234, in5);
    int lcm12345 = lcm1234* in5 /in12345;

    cout <<"g.c.d. : " << in12345 << endl;
    cout <<"l.c.m. : " << lcm12345 << endl;
}

int gcd(int a, int b)
{
    int c;
    if (a < b)
    {
        return gcd(b,a);
    }
    else
    {
        while (b >0)
        {
            c = a % b;
            a = b;
            b = c;
        }
        return a;
    }
}