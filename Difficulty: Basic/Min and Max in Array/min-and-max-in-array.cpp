class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        int minimum = arr[0];
        int maximum = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < minimum) minimum = arr[i];
            if (arr[i] > maximum) maximum = arr[i];
        }
        return {minimum, maximum};
    }
};
