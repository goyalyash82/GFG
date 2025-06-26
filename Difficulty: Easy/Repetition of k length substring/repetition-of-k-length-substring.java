/*You are required to complete below method */
class GfG {
    public static boolean checkString(String str, int k) {
        int n = str.length();
        if (n % k != 0) return false;

        Map<String, Integer> hm = new HashMap<String, Integer>();
        for (int i = 0; i < n; i += k) {
            if (hm.containsKey(str.substring(i, i + k))) {
                int freq = hm.get(str.substring(i, i + k));
                freq++;
                hm.put(str.substring(i, i + k), freq);
            } else
                hm.put(str.substring(i, i + k), 1);
        }

        if (hm.size() == 1) return true;

        if (hm.size() != 2) return false;

        Iterator<Map.Entry<String, Integer>> itr = hm.entrySet().iterator();
        Map.Entry<String, Integer> entry = itr.next();
        if (entry.getValue() == (n / k - 1) || entry.getValue() == 1) return true;

        return false;
    }
}