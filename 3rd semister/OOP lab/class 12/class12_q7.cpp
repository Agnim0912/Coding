#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter size"<<endl;
cin>>n;
int arr[n];
cout<<"enter the values"<<endl;
try
{
    for(int i=0;i<=n;i++)
    {
        if(i<n)
        cin>>arr[i];
        else
        throw i;
    }
}
catch (int a)
{
    cout<<"array out of bound"<<endl;
}
return 0;
}