class Solution {
  public:
    long long int minSum(int arr[], int n) {
        // Your code goes here
        if(n==1) return arr[0];
        sort(arr,arr+n);
        int right=n-1,left=0;
        long long num1=0,num2=0;
        for(int i=0;i<n;i++){
            if(i&1) num1=num1*10+arr[i];
            else num2=num2*10+arr[i];
        }
        // while(num1[0]=='0') num1.erase(num1.begin());
        // while(num2[0]=='0') num2.erase(num2.begin());
        // //cout<<num1<<" "<<num2;
        long long ans= (num1)+(num2);
        return ans;
    }
};