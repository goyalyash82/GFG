class Solution {
    public long countSub(String str) {
        // Your code goes here 
       int count=0;
       for(int i=0;i<str.length();i++){
           if(str.charAt(i)==')'){
               count++;
           }
       }
       return count;
    }
}