lass Solution {
public:
    int maxNumberOfBalloons(string text) {
         std::unordered_map<char, int> charFreq;

    for (char ch : text) {
        charFreq[ch]++;
    }
    int minCount = INT_MAX;
    minCount = std::min(minCount, charFreq['b']);
    minCount = std::min(minCount, charFreq['a']);
    minCount = std::min(minCount, charFreq['l'] / 2);
    minCount = std::min(minCount, charFreq['o'] / 2);
    minCount = std::min(minCount, charFreq['n']);

    return minCount;
}

int main() {
    std::string text = "nlaoballooon";
    int maxInstances = maxNumberOfBalloons(text);
    std::cout << "Maximum number of instances of 'balloon': " << maxInstances << std::endl;

    return 0;
}
};
