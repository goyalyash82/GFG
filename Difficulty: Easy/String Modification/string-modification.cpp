
class Solution {
  public:
    string rearrangeString(string str) {
        unordered_map<char, int> freq;
        for (char c : str) freq[c]++;

        priority_queue<pair<int, char>> maxHeap;
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            maxHeap.push({it->second, it->first});
        }

        string result = "";
        pair<int, char> prev = {0, '#'};

        while (!maxHeap.empty()) {
            pair<int, char> current = maxHeap.top();
            maxHeap.pop();

            result += current.second;

            if (prev.first > 0) {
                maxHeap.push(prev);
            }

            current.first--;
            prev = current;
        }

        for (int i = 1; i < result.length(); i++) {
            if (result[i] == result[i - 1])
                return ""; // invalid rearrangement
        }

        return result;
    }
};
