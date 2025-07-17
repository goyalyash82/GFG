class Solution {
  public:
    vector<pair<int, int>> primeFactors(int k) {
        vector<pair<int, int>> factors;
        for (int i = 2; i * i <= k; ++i) {
            int count = 0;
            while (k % i == 0) {
                count++;
                k /= i;
            }
            if (count > 0) {
                factors.push_back({i, count});
            }
        }
        if (k > 1) {
            factors.push_back({k, 1});
        }
        return factors;
    }

    int countPowerInFactorial(int n, int p) {
        int count = 0;
        while (n > 0) {
            n /= p;
            count += n;
        }
        return count;
    }

    int maxKPower(int n, int k) {
        vector<pair<int, int>> factors = primeFactors(k);
        int res = INT_MAX;

        for (int i = 0; i < factors.size(); i++) {
            int p = factors[i].first;
            int a = factors[i].second;
            int powerInFact = countPowerInFactorial(n, p);
            res = min(res, powerInFact / a);
        }

        return res;
    }
};
