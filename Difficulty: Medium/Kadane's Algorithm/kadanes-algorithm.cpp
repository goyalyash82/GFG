class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int currentSum = 0;
        int maxSum = arr[0];

        for (int i = 0; i < arr.size(); i++) {
            currentSum += arr[i];
            if (currentSum > maxSum)
                maxSum = currentSum;
            if (currentSum < 0)
                currentSum = 0;
        }

        return maxSum;
    }
};
