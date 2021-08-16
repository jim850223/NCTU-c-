#include<iostream>
#include<iomanip>
using namespace std;
float func1(float a);
float func2(float a);

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(5);
    int input;
    cout << "Enter an integer value for the number of order n:" << endl;
    cin >> input;
    cout << "The result of S1 and S2 are:\n";
    cout << setw(10) << "S1 = " <<func1(input) << endl;
    cout << "S1 = " << setw(10) <<func1(input) << endl;
    //請比較setw放的位置的差別
    cout << "S2 = " << func2(input) << endl;
}

//void func1(int a)
//{
//    float sum = 0.0;
//    for(int i = 1; i < a; i++)
//    {
//        sum += 1.0/i;
//    }
//}


float func1(float a)
{
    if (a > 1)
        return func1(a-1) + 1/a;
    else 
        return 1.0;
}

float func2(float a)
{
    float sum = 0;
    float newpart = 1;
    for(int i = 1; i <= a; i++)
    {
        newpart = newpart * 1.0/i;
        sum = sum + newpart;
    }
    return sum;
}
//若採用遞迴，則速度會慢到靠杯

//float func2(float a)
//{
//    if (a > 2)
//        return func2(a-1) + (func2(a-1) - func2(a-2))/a;
//    else if (a == 2)
//        return 3.0/2;
//    else
//        return 1.0;
//}