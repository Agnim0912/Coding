#include<iostream>
using namespace std;
template<class T1, class T2>
class Test
{
        T1 a;
        T2 b;
    public:
        Test(T1 x, T2 y)
        {
            a = x;
            b = y;
        }
        void show()
        {
            cout << a << " and " << b << endl;
        }
};
  

int main()
{
 
    Test <float, int> test1 (9.99999, 998);
    Test <int, char> test2 (99, 't');   
    test1.show();
    test2.show();
      
    return 0;
}