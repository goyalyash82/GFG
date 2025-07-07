class Solution {
  public:
    int maxLength(string& S) {
        int max1=0; 
        stack<int> Q;  
        Q.push(-1);
        for(int i=0;i<S.size();i++) {  
            if(S[i]=='(') Q.push(i); 
            else { 
                Q.pop();
                if(Q.size()) max1=max(max1,i-Q.top()); 
                if(Q.size()==0) Q.push(i);
            }
        } 
        return max1;
        
    }
};

