class Solution {
  public:
    string removeDuplicates(string str) {
        unordered_set<char> seen;
        string result = "";

        for (char ch : str) {
            if (seen.find(ch) == seen.end()) {
                result += ch;
                seen.insert(ch);
            }
        }

        return result;
    }
};
