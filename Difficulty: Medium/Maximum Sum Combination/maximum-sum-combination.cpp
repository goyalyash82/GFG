#include <vector>
#include <queue>
#include <set>
#include <tuple>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& A, vector<int>& B, int K) {
        int n = A.size();
        sort(A.begin(), A.end(), greater<int>());
        sort(B.begin(), B.end(), greater<int>());

        // Max-heap of (sum, i, j)
        priority_queue<tuple<int, int, int>> maxHeap;
        set<pair<int, int>> seen;

        maxHeap.push(make_tuple(A[0] + B[0], 0, 0));
        seen.insert({0, 0});

        vector<int> result;

        while (K-- && !maxHeap.empty()) {
            tuple<int, int, int> current = maxHeap.top();
            maxHeap.pop();

            int sum = get<0>(current);
            int i = get<1>(current);
            int j = get<2>(current);

            result.push_back(sum);

            if (i + 1 < n && seen.find({i + 1, j}) == seen.end()) {
                maxHeap.push(make_tuple(A[i + 1] + B[j], i + 1, j));
                seen.insert({i + 1, j});
            }

            if (j + 1 < n && seen.find({i, j + 1}) == seen.end()) {
                maxHeap.push(make_tuple(A[i] + B[j + 1], i, j + 1));
                seen.insert({i, j + 1});
            }
        }

        return result;
    }
};
