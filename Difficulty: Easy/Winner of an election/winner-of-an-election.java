import java.util.*;

class Solution {
    public static String[] winner(String arr[], int n) {
        HashMap<String, Integer> voteCount = new HashMap<>();

        for (String name : arr) {
            voteCount.put(name, voteCount.getOrDefault(name, 0) + 1);
        }

        String winner = "";
        int maxVotes = 0;

        for (Map.Entry<String, Integer> entry : voteCount.entrySet()) {
            String name = entry.getKey();
            int votes = entry.getValue();

            if (votes > maxVotes || (votes == maxVotes && name.compareTo(winner) < 0)) {
                winner = name;
                maxVotes = votes;
            }
        }

        return new String[]{winner, String.valueOf(maxVotes)};
    }
}
