#include <iostream>
using namespace std;

class number
{
    int x, y;
    public:
    void get(int a, int b)
    {
        x=a; y=b;
    }
    number operator -(){
        x=-x;
        y=-y;
    }
    void show(){
        cout<<x<<"  "<<y<<endl;
    }
    number operator --(){
        x=--x;
        y=--y;
    }
    number operator +(number n){
        number C;
        C.x=x+n.x;
        C.y=y+n.y;
        return C;
    }
};

int main()
{
    int x, y;
    number n1, n2, n3;
    cout<<"enter number x and y"<<endl;
    cin>>x>>y;
    n1.get(x, y);

    n1.operator-();
    n1.show();
    
    n1.operator--();
    n1.show();
    
    cout<<"enter number a and b"<<endl;
    cin>>x>>y;
    n2.get(x,y);
    
    n3=n1+n2;
    n3.show();
}