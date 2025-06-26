// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        map<string,vector<int>> mp;
       int n = arr.size();
       for (int i= 0; i < n;i++) {
           string temp = arr[i];
           sort(temp.begin(),temp.end());
           mp[temp].push_back(i);
       }
       n = mp.size();
       vector<vector<string>> ans(n,vector<string>());
       int k = 0;
       for (auto i:mp) {
           for (auto wow:i.second) ans[k].push_back(arr[wow]);
           k++;
       }
       return ans;  
    }
};