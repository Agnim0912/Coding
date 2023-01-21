/*Extend the program 2. to include a class sports, which stores the marks in sports activity.
Derive the result class from the classes ‘test’ and ‘sports’. 
Calculate the total marks and percentage of a student. */

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
        int num;
    public:
        int arr[6];
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
                sum+=arr[i];
            }
        }
};

class sports:virtual public test
{
    public:
        sports()
        {
            cout<<"Enter marks for sports: "<<endl;
            cin>>arr[5];
            sum+=arr[5];
        }
        void print()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Roll number: "<<roll<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Marks: "<<endl;
            for (int i = 0; i < 6; i++)
            {
                cout<<arr[i]<<endl;
            }
        }
};

class result:public sports , virtual public test
{
    public:
        void display()
        {
            cout<<"Total marks of the student: "<<sum<<endl;
            int p=(sum*100)/600;
            cout<<"Total percentage of the student: "<<p<<endl;

        }
};
int main()
{
    result t;
    t.print();
    t.display();
}