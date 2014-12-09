#include <iostream>
#include <cctype>
using namespace std;

string LongestWord(string sen);
string FindFirstWord(string sen);


int main() {
    
    // keep this function call here
    cout << LongestWord(gets(stdin));
    return 0;
    
}






#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string LongestWord(string sen);
string FindFirstWord(string sen);

int main() {
    
    // keep this function call here
    cout << LongestWord(gets(stdin));
    return 0;
    
}

string LongestWord(string sen)
{
    return sen;
}


string FindFirstWord(string sen)
{
    int word_size =0; //size of the first word
    int word_pos =0;
    
    int i =0;
    while(i < sen.length())
    {
        if(isalpha(sen[i]))
        {
            word_pos = i;
            word_size++;
            i++;
            while(i < sen.length())
            {
                if(isalpha(sen[i]))
                {
                    word_size++;
                }
                else
                    return sen.substr(word_pos, word_size);
            }
        }
        //else... continue with the loop
        i++;
        
        
        
    }
    
    return sen.substr(word_pos, word_size);
}







