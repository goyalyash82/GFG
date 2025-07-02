
class Solution {
  public:
    int findElementAtIndex(int key, vector<int> &arr) {
        // code here
        
         for(int i=0;i<=arr.size();i++){
          if(arr[i] == arr[key]){
              return arr[i];
              break;
          }
      }}
};
