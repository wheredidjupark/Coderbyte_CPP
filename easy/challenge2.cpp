/*
 Using the C++ language, have the function FirstFactorial(num) take the num parameter being passed and return the factorial of it (ie. if num = 4, return (4 * 3 * 2 * 1)). For the test cases, the range will be between 1 and 18.
 
 Use the Parameter Testing feature in the box below to test your code with different arguments.
 */

#include <iostream>
using namespace std;

int FirstFactorial(int num) {
    
    if(num ==1)
        return 1;
    
    return num * FirstFactorial(num-1);
    
}

int main() {
    
    // keep this function call here
    cout << FirstFactorial(gets(stdin));
    return 0;
    
}















