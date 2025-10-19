//challenge Idntify longest string in the array
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string arr[] = {"blue", "yellow", "red", "violet", "purple", "orange", "navyblue"};
    string longest = arr[0];
    for (int i = 0; i < 7; i++) {
        if (arr[i].length() > longest.length())
            longest = arr[i];
    }
    cout << "Longest string: "<< longest;
    return 0;
}
