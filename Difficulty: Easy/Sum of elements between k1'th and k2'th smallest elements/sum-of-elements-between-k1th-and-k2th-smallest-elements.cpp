class Solution {
  public:
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2) {
        // Your code goes here
          priority_queue<long long> pq ; //max heap follow
            
            long long sum = 0 ; 
            
            for(int i=0 ; i<K2 ; i++){
                 pq.push(A[i]) ; 
            }
            
            for(int i=K2 ; i<N; i++){
                 if(A[i]<pq.top()){
                      pq.pop() ; 
                      pq.push(A[i]) ;
                 }
            }
            
              pq.pop() ;    // for between condition 
            while(pq.size()>K1){
                 sum+=pq.top() ; 
                 pq.pop() ; 
            }
            
            return sum ; 
    }
};