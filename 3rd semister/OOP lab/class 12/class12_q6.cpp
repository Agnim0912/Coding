#include <iostream>

using namespace std;
float Division(float numerator, float denominator)
{
   if (denominator == 0) 
   {
      throw runtime_error("Math error: Attempted to divide by Zero\n");
   }
   return (numerator / denominator);
}
int main()
{
   float numerator, denominator,quotient;
   cout << "Enter the numerator: "; 
   cin >> numerator;
   cout << "Enter the denominator: ";
   cin >> denominator;
   try 
   {
      quotient = Division(numerator, denominator);
      cout << "The quotient is " <<quotient << endl;
   }
   catch (runtime_error &e) 
   {
      cout << "Exception occurred" << endl << e.what();
   }
}