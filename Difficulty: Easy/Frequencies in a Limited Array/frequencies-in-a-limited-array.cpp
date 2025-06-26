class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        int N = arr.size();
        vector<int> freq(N, 0);

        for (int i = 0; i < N; i++) {
            if (arr[i] >= 1 && arr[i] <= N)
                freq[arr[i] - 1]++;
        }

        return freq;
    }
};
