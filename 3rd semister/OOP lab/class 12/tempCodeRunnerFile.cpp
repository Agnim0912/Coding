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
 
    Test <float, int> test1 (9.9999, 997);
    Test <int, char> test2 (5599, 't');
    test1.show();
    test2.show();
      
    return 0;
}