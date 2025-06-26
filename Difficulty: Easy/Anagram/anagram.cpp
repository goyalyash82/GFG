class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        if (s1.length() != s2.length()) return false;

        vector<int> freq(26, 0); // for lowercase English letters

        for (char c : s1) freq[c - 'a']++;
        for (char c : s2) freq[c - 'a']--;

        for (int count : freq) {
            if (count != 0) return false;
        }

        return true;
    }
};
