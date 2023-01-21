//3. Write a program to sort an array of integers using function pointer in descending 
//order and resort this array in ascending order using virtual function.

#include <iostream>
using namespace std;

class base
{
public:
    void disOrder(int *arr, int size)
    {
        cout << "Descending Order of base class\n";
        int a;
        for (int i = 0; i < size; ++i)
        {
            for (int j = i + 1; j < size; ++j)
            {
                if (arr[i] < arr[j])
                {
                    a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
    }

    virtual void asOrder(int *arr, int size)
    {
        cout << "Virtual function for Ascending Order of base class\n";
    }
};

class derived : public base
{
public:
    void asOrder(int *arr, int size)
    {
        cout << "Ascending Order of derived class\n";
        int a;
        for (int i = 0; i < size; ++i)
        {
            for (int j = i + 1; j < size; ++j)
            {
                if (arr[i] > arr[j])
                {
                    a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
    }

    void disOrder(int *arr, int size)
    {
        cout << "Descending Order of derived class\n";
    }
};

int main()
{
    base *a;
    int arr[5] = {1, 2, 3, 4, 5};
    derived b;
    a = &b;
    a->disOrder(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i];
    cout << "\n";
    a->asOrder(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i];
    cout << "\n";
    return 0;
}