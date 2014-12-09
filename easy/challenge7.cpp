/*

 Using the C++ language, have the function SimpleSymbols(str) take the str parameter being passed and determine if it is an acceptable sequence by either returning the string true or false. The str parameter will be composed of + and = symbols with several letters between them (ie. ++d+===+c++==a) and for the string to be true each letter must be surrounded by a + symbol. So the string to the left would be false. The string will not be empty and will have at least one letter.
 
 Use the Parameter Testing feature in the box below to test your code with different arguments.

 */


#include <iostream>
using namespace std;

string SimpleSymbols(string str) {
    string boolean = "false";
    
    for(int counter=0; counter < str.length();counter++)
    {
        if(isalpha(str[counter]))
        {
            if(counter == 0 || counter == str.length()-1)
                return boolean;
            else if( str[counter-1] != '+' && str[counter+1] != '+')
            {
    
                return boolean;
            }
        }
    }
    
    boolean = "true";
    
    // code goes here
    return boolean;
    
}

int main() {
    
    // keep this function call here
    cout << SimpleSymbols(gets(stdin));
    return 0;
    
}