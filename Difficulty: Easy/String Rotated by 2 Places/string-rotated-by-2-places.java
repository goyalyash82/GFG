class Solution {
    public static boolean isRotated(String s1, String s2) {
        int n = s1.length();
        if (n != s2.length()) return false;
        if (n <= 2) return s1.equals(s2);  // edge case

        // Rotate anti-clockwise by 2
        String anticlock = s1.substring(2) + s1.substring(0, 2);

        // Rotate clockwise by 2
        String clock = s1.substring(n - 2) + s1.substring(0, n - 2);

        return s2.equals(anticlock) || s2.equals(clock);
    }
}
