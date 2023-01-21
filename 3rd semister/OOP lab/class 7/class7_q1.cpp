/*1) Create a class student which stores name, roll number and age of a student. 
Derive a class test from student class, which stores marks in 5 subjects. 
Input and display the details ofa student.*/

#include <iostream>
#include <string.h>
using namespace std;

class student
{
    private:
    public:
        string name;
        int roll;
        int age;
};

class test:public student
{
    private:
        int arr[5];
        int num;
    public:
        test()
        {
            cout<<"Enter name"<<endl;
            cin>>name;
            cout<<"Enter roll number"<<endl;
            cin>>roll;
            cout<<"Enter age"<<endl;
            cin>>age;
            cout<<"enter marks of 5 subjects:"<<endl;
            for (int i = 0; i < 5; i++)
            {
                cin>>num;
                arr[i]=num;
            }
        }
        void print()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Roll number: "<<roll<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Marks: "<<endl;
            for (int i = 0; i < 5; i++)
            {
                cout<<arr[i]<<endl;
            }
        }
};
int main()
{
    test t;
    t.print();
}