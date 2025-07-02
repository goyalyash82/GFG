class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
         int n=arr.size();
       int start =0,end =n-1,mid;
       int sudh=-1;
       while(start<=end){
           mid=start+(end-start)/2;
           if(arr[mid]==k){
               sudh=mid;
               end=mid-1;
           }
           else if(arr[mid]>k){
               end=mid-1;
           }
           else{
               start =mid+1;
           }
       }
       return sudh;
    }
};