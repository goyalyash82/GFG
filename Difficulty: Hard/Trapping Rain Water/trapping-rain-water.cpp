class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n=arr.size();
        int leftmax=0,rightmax=0,maxheight=arr[0],water=0,index=0;
        //maximum height
        for(int i=1;i<n;i++){
            if(maxheight<arr[i]){
            maxheight=arr[i];
            index=i;
            }
        }
        //leftmax
        for(int i=0;i<index;i++){
            if(leftmax>arr[i])
                water+=leftmax-arr[i];
            else
                leftmax=arr[i];
        }
        //rightmax;
         for(int i=n-1;i>index;i--){
            if(rightmax>arr[i])
                water+=rightmax-arr[i];
            else
            rightmax=arr[i];
            
        }
        return water;
    }
};