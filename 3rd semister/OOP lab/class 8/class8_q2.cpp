//Q1) WAP to show the implementation of virtual base class

#include <iostream>
using namespace std;
  
class A {
public:
    string n;
    A()
    {
        n = "Virtual based class successful";
    }
};
  
class B : public virtual A {
};
  
class C : public virtual A {
};
  
class D : public B, public C {
};
  
int main()
{
    D obj; // object creation of class d
    cout << "a = " << obj.n << endl;
  
    return 0;
}