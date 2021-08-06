#include <iostream>
#include <cstdlib> // for function rand()
#include <ctime>
using namespace std;
int main()
{
    //srand(0);
    srand(time(NULL));
    cout << "generate random number (1 to 10):" << endl;
    for (int idx = 0; idx<20; idx++)
    {
        int x = rand()%10 + 1;
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
