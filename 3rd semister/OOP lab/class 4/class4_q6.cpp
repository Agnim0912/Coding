#include <iostream>
using namespace std;

void area(double b, double h) 
{
    cout <<"Area of triangle: "<< 0.5*b*h << endl;
}
void area(int r) 
{
    cout <<"Area of circle: "<< 22/7*(r*r) << endl;
}
void area(int b, int h) 
{
    cout << "Area of rectangle: " << b*h << endl;
}

int main()
{
    area(10.0, 20.0);
    area(7);
    area(10, 20);
    return 0;
}