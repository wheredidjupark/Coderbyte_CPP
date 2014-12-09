/*
 Using the C++ language, have the function LetterCapitalize(str) take the str parameter being passed and capitalize the first letter of each word. Words will be separated by only one space.
 
 Use the Parameter Testing feature in the box below to test your code with different arguments.
 */
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string LetterCapitalize(string str);
int FindFirstPos(string str, int &str_pos); //leads to the end of word

int main()
{
    
    // keep this function call here
    cout << LetterCapitalize("argument goes here yes");
    return 0;
    
}

string LetterCapitalize(string str)
{
    string temp = str;
    int str_pos = 0;
    
    while(str_pos < str.length())
    {
        int pos = FindFirstPos(temp, str_pos); //gives us the first position of word in string
        string upper;
        char letter = toupper(str[pos]);
        upper += letter;
        temp.replace(pos, 1, upper);
    }
    
    return temp;
}


int FindFirstPos(string str, int &str_pos)
{
    int pos = 0;
    
    
    while(str_pos < str.length()  ) //sequentially look through the string and find the position of the first word. move the str_pos until you reach the end of the word.
    {
        if(isalpha(str[str_pos])) //if the first alphabetic letter is found, record the position.
        {
            pos = str_pos;
            while(str_pos < str.length()) //now eat up the remaining characters of the word.
            {
                if(isalpha(str[str_pos]))
                {
                    str_pos++;
                }
                else
                {
                    return pos; 
                }
            }
        }
        else //else... move onto next letter
        {
            str_pos++;
        }
    }
    return pos;
}