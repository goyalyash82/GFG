#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> findGreater(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n, -1);
        unordered_map<int, int> freq;

        for (int num : arr) {
            freq[num]++;
        }

        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && freq[st.top()] <= freq[arr[i]]) {
                st.pop();
            }

            if (!st.empty()) {
                res[i] = st.top();
            }

            st.push(arr[i]);
        }

        return res;
    }
};
