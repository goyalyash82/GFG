// User function template for C++

class Solution {
  public:
    long long getSubstringWithEqual012(string str) {
        // code here
         map<pair<long long,long long>,long long>ump;
        ump[{0,0}]=1;
        long long z=0,o=0,t=0;
        long long c=0;
        for(auto x:str)
        {
            if(x=='0')
            z++;
            else if(x=='1')
            o++;
            else if(x=='2')
            t++;
            
            int od=o-z,td=o-t;
            if(ump.find({od,td})!=ump.end())
            c+=ump[{od,td}];
            
            ump[{od,td}]++;
        }
        
        return c;
    }
};