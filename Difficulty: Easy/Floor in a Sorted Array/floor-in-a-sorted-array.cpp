class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        // Your code here
        int ans = -1;
        int low = 0;
        int high = arr.size()-1;
        int mid;
        
        while(high>=low){
            mid = (high + low)/2;
            
            if(arr[mid]<=x){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        
        return ans;
    }
};
