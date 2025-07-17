class Solution {
  public:
    string convertToRoman(int n) {
          int num[13] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string sym[13] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int i = 12 , val = 0;
        string ans = "";
        while(n)
        {
            val = n/num[i];
            while(val)
            {
                ans += (sym[i]);
                n -= num[i];
                val--;
            }
            i--;
        }
        return ans;
    }
};