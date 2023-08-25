class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      #include <iostream>
#include <unordered_map>

using namespace std;

    unordered_map<char, int> charCount;

    for (char c : magazine) {
        charCount[c]++;
    }
    for (char c : ransomNote) {
        if (charCount[c] > 0) {
            charCount[c]--;
        } else {
            return false;
        }
    }

    return true;
    }
int main(){
    string ransomNote = "aabb";
    string magazine = "aabbc";

    if (canConstruct(ransomNote, magazine)) {
        cout << "Ransom note can be constructed." << endl;
    } else {
        cout << "Ransom note cannot be constructed." << endl;
    }

    return 0;
}  
};
