#include<iostream>
using namespace std;

void deci_trans(int input);

int main(void)
{
    int deci_value;
    cout << "Enter a decimal value ";
    cin >> deci_value;
    cout << "The binary value of " << deci_value << " is ";
    deci_trans(deci_value);
}

void deci_trans(int input)
{
    int tmp = 2;
    int count = 1;
    //count用來記錄位元數;
    while (input >= tmp)
    {
        tmp = tmp * 2;
        count++;
    }
    if (tmp != input) //&& (tmp >= 2))
        tmp = tmp / 2;
    
    while(count > 0)
    {
        if (tmp > input)
        {
            cout << 0;
        }
        else 
        {
            cout << 1;
            input = input - tmp;
        }
        count--;
        //input = input - tmp;
        tmp = tmp / 2;
    }
    cout << endl;
}