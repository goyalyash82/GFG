class Solution {
  public:
    string isPrime(int n) {

        // Code here
        if(n<=1) return "No";
            
            else if(n==2) return "Yes";
            
            int count=0;

        for (int i = 2; i <= sqrt(n); i++) {
            // Write your logic here
            // Return "Yes" if n is prime, else return "No"
            /*n is prime only if it is not divisible by any i.
            We will not reach till n and 1 is already discarded*/
 if(n%i ==0) {
                count++;
            // return  Yes if n is a prime number ,else return No
        }
    }
      if(count == 0){ return "Yes";}
        
         else return "No";
       
    }
};