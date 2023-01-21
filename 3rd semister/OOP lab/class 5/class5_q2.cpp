#include<iostream>
using namespace std;
class distanceb;
class distancea
{
    int q,w;
    public:
    int f, i, m, c;
    void enter()
    {
        cout<<"Enter length in feet-inches: ";
        cin>>f>>i;
        cout<<"Enter length in meter-centimeter: ";
        cin>>m>>c;
        q=12*f+i;
        w=100*m+c;
    }
    friend void comp(distancea, distanceb);
};

class distanceb
{
    int q, w;
    public:
    int f, i, m, c;
    void enter()
    {
        cout<<"Enter length in feet-inches: ";
        cin>>f>>i;
        cout<<"Enter length in meter-centimeter: ";
        cin>>m>>c;
        q=12*f+i;
        w=100*m+c;
    }
}