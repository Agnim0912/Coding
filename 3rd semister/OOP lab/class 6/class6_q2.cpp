//W.A.P to access the private constructor of another class using friend class.
#include <iostream>
using namespace std;
  
class A{
public:
    A(){
       cout << "constructor of A\n";
    }
    ~A(){
       cout << "destructor of A\n";
    }
};
  
int main(){
    A b1;   
    return 0;
}