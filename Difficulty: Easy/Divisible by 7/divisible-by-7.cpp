// User function template for C++

class Solution {
  public:
    int isdivisible7(string num) {
        int rem = 0;
        for (int i =0; i < num.length(); i++){
            int digit = num[i]- '0';
            rem = (rem *10 + digit) % 7;
        }
        if(rem % 7 == 0){
            return 1;
        }
        return 0;
    }
};