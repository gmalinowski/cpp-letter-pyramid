#include <iostream>

using namespace std;

void printReverse(string str) {
    string::reverse_iterator rit;
    for (rit = str.rbegin() + 1; rit < str.rend(); rit++)
        cout << *rit;
}

void printSpaces(size_t times) {
    for (size_t i = 0; i < times; i++) {
        cout << " ";
    }
}

void printPyramid(string str) {
    for (size_t i = 0; i < str.size(); i++) {
        printSpaces(str.size() - i - 1);
        cout << str.substr(0, i + 1);
        printReverse(str.substr(0, i + 1));
        cout << endl;
    }
}

int main() {

    string input;
    getline(cin, input);
    printPyramid(input);

    return 0;
}
