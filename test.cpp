#include <iostream>
using namespace std; 
int main () 
{
        int no1, no2, result,mul; 
        cout << "\nEnter the first number = " ; 
        cin  >> no1 ;
        cout << "\nEnter the second number = " ;
        cin  >> no2 ; 
        result = no1 + no2 ;
		mul = no1 * no2;
        cout << "\nThe sum of "<< no1 <<" and "<< no2;
		cout << "is = "<<result;
		cout << "\nThe mul of "<< no1 <<" and "<< no2;
		cout << "is = "<<mul;
        return 0 ;
}