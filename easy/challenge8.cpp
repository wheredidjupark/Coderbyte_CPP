/*
 Using the C++ language, have the function CheckNums(num1,num2) take both parameters being passed and return the string true if num2 is greater than num1, otherwise return the string false. If the parameter values are equal to each other then return the string -1.
 
 Use the Parameter Testing feature in the box below to test your code with different arguments.
 */

#include <iostream>
using namespace std;

string CheckNums(int num1, int num2) {
    string boolean = "false";
    
   
    
    if(num2 < num1)
        return boolean;
    else
        boolean = "true";
    
    if(num1 == num2)
        boolean = "-1";
    
        return boolean;
    
}

int main() {
    
    // keep this function call here
    cout << CheckNums(gets(stdin));
    return 0;
    
}















