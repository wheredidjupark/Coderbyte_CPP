#include <iostream>
using namespace std;

string FirstReverse(string str) {
    
    string temp;

    for(int i=str.length()-1; i >= 0; i--)
    {
        char character = str[i];
        temp += character;
    }
    return temp;
    
}

int main() {
    
    // keep this function call here
    cout << FirstReverse(gets(stdin));
    return 0;
    
}















