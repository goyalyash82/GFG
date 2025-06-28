
// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string ans= "";
        for (int i=0; i<arr[0].size(); i++){
            char ch= arr[0][i];
            bool flag= true;
            for (int j= 1; j< arr.size(); j++){
                char ch2= arr[j][i];
                if(ch2!= ch){
                    flag= false;
                    break;
                }
            }
            if(flag){
                ans= ans+ arr[0][i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};

