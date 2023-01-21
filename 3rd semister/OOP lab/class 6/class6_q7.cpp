//Create a class which stores a string and its length as data members. Include all the
//constructors. Include a member function to join two strings and display the
//concatenated string.

#include <iostream>
#include <string.h>
using namespace std;

class strings
{
    private:
    int cnt;
    public:
        string str;
        strings()
        {
            cout<<"enter a string: "; cin>>str;
            cout<<endl;
        }
        strings(string str){
            this->str=str;
        }
        strings(strings &){
            
        }
        void concat(string str2){
            cout<<str+str2<<endl;
        }
};

int main(){
    cout<<"default constructor"<<endl;
    class strings s,s2;
    s.concat(s2.str);
    cout<<"parameterized constructor"<<endl;
    string str, str2;
    cout<<"enter a string: "; cin>>str;
    cout<<"enter a string: "; cin>>str2;
    class strings s3(str),s4(str2);
    s3.concat(s4.str);
}