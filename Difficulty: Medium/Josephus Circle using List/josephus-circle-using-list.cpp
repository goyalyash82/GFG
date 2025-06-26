// User function Template for C++

int josephus(int n, int k) {
    // code here
    list<int> ls;
    for(int i=0;i<n;i++){
        ls.push_back(i);
    }
    auto it = ls.begin();
    while(ls.size()>1){
        for(int i=1;i<k;i++){
            it++;
            if(it==ls.end()){
                it = ls.begin();
            }
        }
        it = ls.erase(it);
        if(it==ls.end()){
            it = ls.begin();
        }
    }
    return *it+1;

}