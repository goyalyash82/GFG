class Solution {
  public:
    int minIndexChar(string &s1, string &s2) {
        unordered_set<char> s2Chars(s2.begin(), s2.end());

        for (int i = 0; i < s1.length(); i++) {
            if (s2Chars.find(s1[i]) != s2Chars.end()) {
                return i;
            }
        }

        return -1;
    }
};
