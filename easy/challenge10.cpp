/*Using the C++ language, have the function AlphabetSoup(str) take the str string parameter being passed and return the string with the letters in alphabetical order (ie. hello becomes ehllo). Assume numbers and punctuation symbols will not be included in the string.
 
 Use the Parameter Testing feature in the box below to test your code with different arguments.*/

#include <iostream>
#include <string>
using namespace std;

string AlphabetSoup(string str)
{
    //the following creates an array of characters
    char set[str.length()];
    for(int i =0; i < str.length(); i++)
    {
        set[i] = str[i];
    }
    
    ///////////////
    for(int i=0; i < str.length(); i++)
    {
        char temp = set[i];
        
        for(int j =i; j <str.length(); j++)
        {
            if(temp > set[j]) //if the current temp is greater than set[i], set temp to the set[i] (i.e. the smaller value)
            {
                char temp2 = temp;
                temp = set[j];
                set[j] = temp2;
            }
            /////
        }
        
        set[i] = temp;
    }
    
    string srt;
    for(int i=0; i < str.length(); i++)
    {
        srt += set[i];
    }
    
    return srt;
    
}

int main() {
    
    // keep this function call here
    //    cout << AlphabetSoup(gets(stdin));
    cout <<AlphabetSoup("hello");
    return 0;
    
}















