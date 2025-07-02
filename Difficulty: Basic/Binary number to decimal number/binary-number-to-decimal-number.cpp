class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
         long long lastNo = 1;
        int n = b.length();
        long ans = b[n-1]-'0';
        for(int i=n-2;i>=0;i--)
        {
            lastNo = lastNo*2;
            ans = ans + (b[i]-'0')*lastNo;
        }
        return ans;
    }
};