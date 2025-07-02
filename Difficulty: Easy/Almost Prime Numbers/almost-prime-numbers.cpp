class Solution {
public:
    int countPrimeFactors(int num) {
        int count = 0;
        for (int i = 2; i * i <= num; ++i) {
            while (num % i == 0) {
                ++count;
                num /= i;
            }
        }
        if (num > 1) ++count; 
        return count;
    }

    vector<int> findKAlmostPrimes(int n, int k) {
        vector<int> result;
        int current = 2;
        while (result.size() < n) {
            if (countPrimeFactors(current) == k) {
                result.push_back(current);
            }
            ++current;
        }
        return result;
    }
};
