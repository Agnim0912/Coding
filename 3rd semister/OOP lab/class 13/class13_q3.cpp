//Write a C++ program to read students’ record such as name, roll, sex, height, and weight 
//from the specified file and to display in a sorted order (name is the key for sorting).

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
class student
{
    public:
    string StudentName;
    int RollNumber;
    string Gender;
    int Weight;
    int Height;
};
bool compare(const student S1, const student S2)
{
    return S1.StudentName < S2.StudentName;
}
int main()
{
    ifstream x
    {
        "record.txt" 
    };
    if (!x)
    {
        cerr << "The File could not be opened due to an error." << endl;
        exit(0);
    }
    student s[3];
    int i = 0;
    while (!x.eof())
    {
        x >> s[i].StudentName;
        x >> s[i].RollNumber;
        x >> s[i].Gender;
        x >> s[i].Height;
        x >> s[i].Weight;
        i++;
    }
    sort(s, s + 3, compare);
    for (int i = 0; i < 3; i++)
    {
        cout << s[i].StudentName << endl;
        cout << s[i].RollNumber << endl;
        cout << s[i].Gender << endl;
        cout << s[i].Height << endl;
        cout << s[i].Weight << endl;
        cout << "\n" << endl;
    }
    return 0;
}