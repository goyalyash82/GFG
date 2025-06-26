class Solution {
    public static int nextPrime(int n) {
        if (n <= 1) {
            return 2;
        }

        n++;
        while (!isPrime(n)) {
            n++;
        }

        return n;
    }

    public static boolean isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) return false;
        }
        return true;
    }
}
