class Solution {
public:
    void reverseString(vector<char>& s) {
        #include <iostream>
#include <vector>

using namespace std;


    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    vector<char> input_string = {'h', 'e', 'l', 'l', 'o'};
    reverseString(input_string);

    for (char c : input_string) {
        cout << c << " ";
    }

    return 0;
}
    };
