class Solution {
  public:
    int minRepeats(string A, string B) {
        string repeated = A;
        int count = 1;

        // Repeat A until the repeated string's length is at least B's length
        while (repeated.length() < B.length()) {
            repeated += A;
            count++;
        }

        // Check if B is now a substring
        if (repeated.find(B) != string::npos) {
            return count;
        }

        // One more repeat might be needed to cover edge overlaps
        repeated += A;
        count++;
        if (repeated.find(B) != string::npos) {
            return count;
        }

        return -1;
    }
};
