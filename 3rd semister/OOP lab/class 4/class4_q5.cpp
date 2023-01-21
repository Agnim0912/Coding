#include <iostream>
using namespace std;
     
int main()    
{    
    int arr[] = {57, 12, 38, 7, 1, 10, 23, 51, 19, 91};     
    int temp = 0;    
        
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    cout<<"Elements of original array: "<<endl;    
    for (int i = 0; i < length; i++) {     
        cout<<arr[i]<<" ";     
    }      
        
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];
               arr[j] = temp;    
           }     
        }     
    }    
        
    cout<<endl; 
        
    cout<<"Elements of array sorted in ascending order: "<<endl;    
    for (int i = 0; i < length; i++) {     
        cout<<arr[i]<<" ";    
    }    
    return 0;
}
