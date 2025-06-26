class Solution {
  public:
    int isValid(string& s) {
        // code here
         if(s[0]=='.' or s[s.length()-1]=='.')
        return false;
        vector<int> ans;
        string temp="";
        for (int i=0; i<s.length(); i++){
            char ch= s[i];
             if(ch=='.'){
                if(temp.empty()){
                    return 0;
                }
                if(temp[0]=='0' and temp.size()>1){
                    return 0;
                }
                int num= stoi(temp);
                if(num<0 or num>255){
                    return 0;
                }
                ans.push_back(num);
                temp="";
                
            }
           else if(!isdigit(ch)){
                return 0;
            }
            else{
                temp+= ch;
            }
        }
        if(temp.empty())
        return 0;
        if(temp[0]=='0' and temp.size()>1)
        return 0;
        int num= stoi(temp);
        if(num<0 or num>255)
        return 0;
        ans.push_back(num);
        return ans.size()==4;
        
    }
};