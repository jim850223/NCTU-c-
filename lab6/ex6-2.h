
const double PI = 3.1415926;
float length;
float result;
void rec( )
//cout.setf(ios::fixed);
//cout.setf(ios::showpoint);
//cout.precision(3);

{
 //   cout.setf(ios::fixed);
//cout.setf(ios::showpoint);
//cout.precision(3);
    float width;
    cout << "Please enter the Length and Width respectively." << endl;
    cin >> length >> width;
    result = (length + width) * 2;
    cout << "The perimeter of a rectangular";
    cout << " with (Length,Width) = (" << length << ", " << width <<") is " << result << endl;    
}

void squ( )
{
    cout << "Please enter the Length." << endl;
    cin >> length;
    result = length * 4;
    cout << "The perimeter of a square";
    cout << " with (Length) = (" << length << ") is " << result << endl; 
    
}

void cir( )
{   
    float radius;
    cout << "Please enter the radius of the circle.." << endl;
    cin >> radius;
    result = radius * 2 * PI ;
    cout << "The perimeter of a circle";
    cout << " with (radius) = (" << radius << ") is " << result << endl; 
}

