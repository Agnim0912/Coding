//Create a class which stores time in hh:mm format. Include all the constructors. The
//parameterized constructor should initialize the minute value to zero, if it is not
//provided. 

#include <iostream>
#include <iomanip>
using namespace std;

class time
{
    private:
        int hrs; int min;
    public:
        time(int h){
            hrs=h;
            min=0;
        }
        time(int h, int m=0){
            hrs=h;
            min=m;
        }
        void print(){
            cout<<setw(2)<<setfill('0')<<hrs<<":"
                <<setw(2)<<setfill('0')<<min;
        }
};

int main(){
    int hrs, min;
    cout<<"Enter time: "<<endl;
    cout<<"Hours: "; cin>>hrs;
    cout<<"Minutes: "; cin>>min;
    class time t(hrs, min);
    t.print();
}