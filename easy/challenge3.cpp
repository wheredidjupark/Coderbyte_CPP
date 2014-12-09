#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string LongestWord(string sen);
string FindWord(string sen, int &sen_pos);

int main() {
    
    // keep this function call here
    cout << LongestWord(gets(stdin));
    return 0;
    
}

string LongestWord(string sen)
{
    string largest;
    string second_largest;
    
    int sen_pos = 0;
    largest = FindWord(sen, sen_pos); //gets the first word...

    while(sen_pos < sen.length())
    {
        second_largest = FindWord(sen, sen_pos);
        
        if(largest.length() < second_largest.length()) //compares the largest to the "second largest" word. If second largest word is bigger than the largest, replace the largest.
        {
            largest = second_largest;
            second_largest = "";
        }
    }
  
    
    return largest;
}


string FindWord(string sen, int &sen_pos)
{
    int word_size =0; //size of the word
    string word;
    
    while(sen_pos < sen.length())
    {
        //find word by finding its first letter
        if(isalpha(sen[sen_pos]))
        {
            char char1 = sen[sen_pos];
            word += char1;
            sen_pos++;
            while(sen_pos < sen.length())
            {
                if(isalpha(sen[sen_pos])) //append the letter to the word until it reaches non-letter
                {
                    char1 = sen[sen_pos];
                    word += char1;
                    sen_pos++;
                }
                else //reaches the non-letter, so the word is completed
                    return word;
            }
        }
        else
        {
            sen_pos++; //otherwise, continue with the loop
        }
    }
    
    return word;
}







