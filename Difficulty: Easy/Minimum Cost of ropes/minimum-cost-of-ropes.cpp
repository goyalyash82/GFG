class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
          int cost=0;
        priority_queue<int,vector<int>,greater<int>>pq(arr.begin(),arr.end());
        while(pq.size()>1){
            int min1=pq.top();
            pq.pop();
            int min2=pq.top();
            pq.pop();
            cost+=min1+min2;
            pq.push(min1+min2);
        }
        return cost;
    }
};