class Solution {
public:
    int modified(string a) {
        int insertions = 0;
        int count = 1;

        for (int i = 1; i < a.length(); i++) {
            if (a[i] == a[i - 1]) {
                count++;
                if (count == 3) {
                    insertions++;
                    count = 1; // Reset as we virtually "insert" a character
                }
            } else {
                count = 1;
            }
        }

        return insertions;
    }
};
