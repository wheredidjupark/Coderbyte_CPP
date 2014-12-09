#include <iostream>
using namespace std;

int SimpleAdding(int num) {

    int count = num;
    int output = 0;
    while(count != 0)
    {
        output += count;
        count--;
    }
}

int main() {
    
    // keep this function call here
    cout << SimpleAdding(gets(stdin));
    return 0;
    
}















