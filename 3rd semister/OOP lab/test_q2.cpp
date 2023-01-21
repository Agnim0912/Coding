#include <iostream>
using namespace std;

class Operation{
    public:
    int add(int numbera, int numberb){
        return numbera+numberb;
    }
    int add(int numbera, int numberb, int numberc){
        return numbera+numberb+numberc;
    }
};

int main(){
    Operation A;
    int sum1,sum2;
    sum1=A.add(3,4);
    sum2=A.add(12,13);
    cout<<sum1<<","<<sum2<<endl;
}