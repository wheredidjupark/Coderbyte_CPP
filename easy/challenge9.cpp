/*Using the C++ language, have the function TimeConvert(num) take the num parameter being passed and return the number of hours and minutes the parameter converts to (ie. if num = 63 then the output should be 1:3). Separate the number of hours and minutes with a colon.
 
 Use the Parameter Testing feature in the box below to test your code with different arguments.*/
#include <iostream>
#include <string>
using namespace std;

string TimeConvert(int num) {
    int hour = num/60;
    int minutes = num%60;
    
    string time = to_string(hour) + ":" + to_string(minutes);
    return time;
    
}

int main() {
    
    // keep this function call here
    //    cout << TimeConvert(gets(stdin));
    cout <<TimeConvert(126);
    return 0;
    
}















