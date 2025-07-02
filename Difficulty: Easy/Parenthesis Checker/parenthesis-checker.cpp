class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(!st.empty() && ((int(st.top())==int(s[i])-2) || (int(st.top())==int(s[i])-1))) st.pop();  
            else st.push(s[i]);
        }
        return st.empty();
    }
};