class Solution {
public:
    int lengthOfLastWord(string s) {
        #include <iostream>
#include <string>
using namespace std;

    int length = 0;
    int i = s.length() - 1;
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}
int main() {
    string input = "Hello World";

    int result = lengthOfLastWord(input);
    cout << "Length of the last word: " << result << endl;

    return 0;
}
};
