/*Extend the program 1 to derive a class from result from classs ‘test’ which includes
member function to calculate total marks and percentage of a student.
Input the data for astudent and display its total marks and percentage.*/

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

class test: virtual public student
{
    private:
        int arr[5];
        int num;
    public:
        int sum=0;
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
                sum+=arr[i];
            }
        }
};

class result:virtual public student, public test
{
    public:
        void display()
        {
            cout<<"Total marks of the student: "<<sum<<endl;
            int p=(sum*100)/500;
            cout<<"Total percentage of the student: "<<p<<endl;

        }
};
int main()
{
    result t;
    t.print();
    t.display();
}