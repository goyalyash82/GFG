/* You are required to complete this function
which return the required missing number
if present else return -1*/
int missingNumber(const string& str) {
    // Code here
     string s="";
    for(int i=0;i<str.length() && i<6;i++){
        s+=str[i];
        size_t j=i+1;
        string s1 = s,s2;
        int f=0;
        while(j<str.length()){
            s1 = to_string(stoi(s1)+1);
            size_t k = str.find(s1,j);
            if(k!=string::npos && j==k){
                j=j+s1.length();
            }else{
                if(f) break;
                f=1;
                s2=s1;
            }
        }
        if(f && j>=str.length()) return stoi(s2);
    }
    return -1;
}