class Solution {
  public:
    long long smallestpositive(vector<long long> array, int n) {
        sort(array.begin(), array.end());
        long long res = 1;

        for (int i = 0; i < n && array[i] <= res; i++) {
            res += array[i];
        }

        return res;
    }
};
