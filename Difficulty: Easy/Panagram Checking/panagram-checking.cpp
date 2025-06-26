class Solution {
  public:
    bool checkPangram(string &s) {
        vector<bool> seen(26, false);
        for (char ch : s) {
            if (isalpha(ch)) {
                ch = tolower(ch);
                seen[ch - 'a'] = true;
            }
        }
        for (bool present : seen) {
            if (!present) return false;
        }
        return true;
    }
};
