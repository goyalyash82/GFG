class Solution {
  public:
    bool areKAnagrams(string &s1, string &s2, int k) {
        if (s1.length() != s2.length()) return false;

        unordered_map<char, int> freq1, freq2;

        for (char ch : s1) freq1[ch]++;
        for (char ch : s2) freq2[ch]++;

        int changesNeeded = 0;
        for (auto it : freq1) {
            char ch = it.first;
            int countInS1 = it.second;
            int countInS2 = freq2[ch];
            if (countInS1 > countInS2) {
                changesNeeded += (countInS1 - countInS2);
            }
        }

        return changesNeeded <= k;
    }
};
