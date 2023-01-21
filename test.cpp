#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class rem
{
private:
    char str[30];
    char str2[30];
    int i = 0;
    int n;

public:

    void get_str(void);
    void rem_char(void);
};

void rem::get_str()
{
    cout << "Enter a string: ";
    cin >> str;
}

void rem::rem_char()
{
    int j = 0;
    for (int i = 0; i < 30; i++)
    {
        n = (int)str[i];
        printf("%d",n);
        if (n > 97 && n < 122 || n > 65 && n < 90)
        {
            str2[j] = str[i];
            j++;
            cout << n << " ";
        }
    }
}

int main()
{
    rem ob;
    ob.get_str();
    ob.rem_char();
    return 0;
}