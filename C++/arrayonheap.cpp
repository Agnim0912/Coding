#include <iostream>
using namespace std;

/*int main(){
    int arr[6] = {1,2,3,4,5,6};
    arr[1];
    int num_of_rows = 2;
    int num_of_columns = 3;
    
    for(int row =0; row<num_of_rows; row++){
        cout<<"|";
        for (int column = 0; column < num_of_columns; column++){
            cout<<arr[row*num_of_columns +column]<<"|";
        }
        cout<<endl;
    }
}*/

int main(){
    /*int arr[4][5] = {
        {1,2,3},
        {4,5,6},
    };
    arr[1];*/
    int num_of_rows = 2;
    int num_of_columns = 3;
    int **arr = new int*[num_of_rows];

    for(int i=0; i<num_of_columns;i++){
        arr[i]= new int[num_of_columns];
    }

    for(int row =0; row<num_of_rows; row++){
        for (int column = 0; column < num_of_columns; column++){
            cout<<"Enter number";
            cin>>arr[row][column];
        }
    }
    
    for(int row =0; row<num_of_rows; row++){
        cout<<"|";
        for (int column = 0; column < num_of_columns; column++){
            cout<<arr[row][column]<<"|";
        }
        cout<<endl;
    }
}