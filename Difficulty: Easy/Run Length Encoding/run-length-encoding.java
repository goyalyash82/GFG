class Solution {
    public static String encode(String s) {
        StringBuilder result = new StringBuilder();

        int n = s.length();
        int count = 1;

        for (int i = 1; i < n; i++) {
            if (s.charAt(i) == s.charAt(i - 1)) {
                count++;
            } else {
                result.append(s.charAt(i - 1)).append(count);
                count = 1;
            }
        }

        // Append the last character and its count
        result.append(s.charAt(n - 1)).append(count);

        return result.toString();
    }
}
