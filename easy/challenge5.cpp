#include <iostream>
using namespace std;

int SimpleAdding(int num) {
    
    if(num ==0)
        return 0;
    return num + SimpleAdding(num-1);
}

int main() {
    
    // keep this function call here
    cout << SimpleAdding(gets(stdin));
    return 0;
    
}















