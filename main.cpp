#include <iostream>
#include <vector>
#include "palindrome.cpp"
using namespace std;

int main() {

    Solution sol;

    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (sol.isPalindrome(x)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}