/*Create a class ‘shape’. Derive three classes from it: Circle, Triangle and Rectangle. 
Include the relevant data members and functions in all the classes. 
Find the area of each shape and display it.*/

#include <iostream>  
using namespace std;  

class Shape 
{  
    public:  
    int a, b, r;  
    void get_data(int n,int m)  
    {  
        a= n;    b = m;  
    }  
    void get_data(int r)  
    {  
        this->r= r;  
    }  
}; 
class Circle : public Shape   
{  
    public:  
    int circle_area()  
    {  
        int result = (22*r*r)/7;  
        return result;  
    }  
};   
class Rectangle : public Shape   
{  
    public:  
    int rect_area()  
    {  
        int result = a*b;  
        return result;  
    }  
};   
class Triangle : public Shape     
{  
    public:  
    int triangle_area()  
    {  
        float result = 0.5*a*b;  
        return result;  
    }  
};  
main(){
    Rectangle r;
    Triangle t;  
    Circle c;
    int length,breadth,base,height, radius;  
    cout << "Enter the radius of a circle: ";  
    cin>>radius;  
    c.get_data(radius);  
    int m = c.circle_area();  
    cout << "Area of the circle is : " <<m<<endl ;  
    cout << "Enter the base and height of the triangle: " ;  
    cin>>base>>height;  
    t.get_data(base,height);  
    float n = t.triangle_area();  
    cout <<"Area of the triangle is : " << n<<endl;  
    cout << "Enter the length and breath of a rectangle: ";  
    cin>>length>>breadth;  
    r.get_data(length, breadth);  
    int p = r.rect_area();  
    cout << "Area of the rectangle is : " <<p<<endl ;  
    return 0;  
}  
