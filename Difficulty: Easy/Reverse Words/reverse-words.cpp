class Solution {
  public:
    string reverseWords(string &s) {
        vector<string> words;
        string temp = "";

        // Collect words, skipping extra spaces
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                temp += s[i];
            } else if (!temp.empty()) {
                words.push_back(temp);
                temp = "";
            }
        }

        // Add last word if exists
        if (!temp.empty()) {
            words.push_back(temp);
        }

        // Reverse word order
        reverse(words.begin(), words.end());

        // Build final string with single spaces
        string result = "";
        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            if (i != words.size() - 1) result += " ";
        }

        return result;
    }
};
