class Solution {
  public:
   
    string smallestWindow(string &s1, string &s2) {
        // Your code here
        
        int hm[256] = {0};
        
        for (int i = 0; i < s2.size(); i++) {
            hm[s2[i]]++;
        } 
        
       int l = 0, r = 0, cnt = 0, minLen = INT_MAX, sIndex = 0;
        
        while (r < s1.size())  {
            
            if (hm[s1[r]] > 0) cnt++;
            hm[s1[r]]--;
            
            //Shrink The String until find smallest Sub - array
            while (cnt == s2.size()) {
            
                if (r-l+1 < minLen) {
                    minLen = r-l+1;
                    sIndex = l;
                }
                
                hm[s1[l]]++;
                if (hm[s1[l]] > 0) cnt--;
         
                l++;
                
            }
           r++;
        }
    
        return (minLen == INT_MAX) ? "" : s1.substr(sIndex, minLen);
   
    }
};