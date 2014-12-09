/*
 Using the C++ language, have the function LetterChanges(str) take the str parameter being passed and modify it using the following algorithm. Replace every letter in the string with the letter following it in the alphabet (ie. c becomes d, z becomes a). Then capitalize every vowel in this new string (a, e, i, o, u) and finally return this modified string.
 
 Use the Parameter Testing feature in the box below to test your code with different arguments.
 */

#include <iostream>
#include <cctype>
using namespace std;

string LetterChanges(string str) {
    
    string temp;
    for(int i =0; i < str.length(); i++)
    {
        if(isalpha(str[i])) //check whether the character is a alphabetic letter
        {
            char character;
            if(str[i] == 'z')
            {
                character = 'a';
            }
            else
            {
                int letter_int = static_cast<int>(str[i]) +1;
                character = static_cast<char>(letter_int);
            }
            temp += character;
        }
        else
        {
            char character = str[i];
            temp += character;
        }
    }
    // code goes here
    return temp;
    
}

int main() {
    
    // keep this function call here
    cout << LetterChanges(gets(stdin));
    return 0;
    
}