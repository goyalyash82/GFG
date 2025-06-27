class Solution {
  public:
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n) {
        unordered_map<int, int> prefixSumCount;
        int sum = 0;
        long long int count = 0;

        for (int i = 0; i < n; i++) {
            sum += (arr[i] == 0) ? -1 : 1;

            if (sum == 0) count++;
            if (prefixSumCount.find(sum) != prefixSumCount.end()) {
                count += prefixSumCount[sum];
            }

            prefixSumCount[sum]++;
        }

        return count;
    }
};
