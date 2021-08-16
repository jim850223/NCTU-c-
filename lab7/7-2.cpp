#include <iostream>
using namespace std;

void swap();
//int x = 5, y = 6;
//int的宣告位置放在裡面外面都無妨，只要在真正執行它之前被宣告即可
int main()
{
 int x = 5, y = 6;
 cout << "x = " << x << " and y = " << y << endl;
 swap();
 cout << "x = " << x << " and y = " << y << endl;
 return 0;
}
void swap()
{
 int temp;
 temp = x;
 x = y;
 y = temp;
}