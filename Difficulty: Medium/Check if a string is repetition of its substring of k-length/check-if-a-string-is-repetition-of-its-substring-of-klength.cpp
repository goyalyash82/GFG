// User function template for C++
class Solution {
  public:
  int kSubstrConcat (int n, string s, int k)
    {
        // Your Code Here
        if(n%k!=0)
        return 0;
        
        unordered_map<string,int> mp;
        
        for(int i=0;i<n;i=i+k){
            string s2=s.substr(i,k);
            mp[s2]++;
        }
        
        if(mp.size()<=2)
        {
            int ma=0,su=0;
        
        for(auto it:mp)
        {
            ma=max(ma,it.second);
            su=su+it.second;
        }
        if(su-ma==1 || su-ma==0)
        return 1;
        else
        return 0;
        }
        else
        return 0;
    }

};