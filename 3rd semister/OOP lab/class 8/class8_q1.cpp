//Q1) WAP to show the implementation of this pointer

#include <iostream>  
using namespace std;  
class Employee {  
   public:  
       int duplicate; //data member (also instance variable)      
       Employee(int duplicate)    
        {    
             this->duplicate = duplicate;    
        }    
       void display()    
        {    
            cout<<duplicate<<"  "<<endl;    
        }    
};  
int main(void) {  
    Employee e1 =Employee(101); //creating an object of Employee   
    Employee e2=Employee(102); //creating an object of Employee  
    e1.display();    
    e2.display();    
    return 0;
}  