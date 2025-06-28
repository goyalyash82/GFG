class Solution {
  public:
    int getCount(int n) {
        if (n == 1) return 10;

        vector<vector<int>> moves = {
            {0, 8},       // 0
            {1, 2, 4},    // 1
            {2, 1, 3, 5}, // 2
            {3, 2, 6},    // 3
            {4, 1, 5, 7}, // 4
            {5, 2, 4, 6, 8}, // 5
            {6, 3, 5, 9}, // 6
            {7, 4, 8},    // 7
            {8, 5, 7, 9, 0}, // 8
            {9, 6, 8}     // 9
        };

        vector<vector<long long>> dp(n + 1, vector<long long>(10, 0));
        for (int digit = 0; digit <= 9; digit++) {
            dp[1][digit] = 1;
        }

        for (int i = 2; i <= n; i++) {
            for (int digit = 0; digit <= 9; digit++) {
                for (int neighbor : moves[digit]) {
                    dp[i][digit] += dp[i - 1][neighbor];
                }
            }
        }

        long long total = 0;
        for (int digit = 0; digit <= 9; digit++) {
            total += dp[n][digit];
        }

        return total;
    }
};
