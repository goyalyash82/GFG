class Solution {

    // Function to find the character in patt which is present in str at min index
    public static String printMinIndexChar(String S, String patt) {

        // Your code here
        int index=S.length();
        String ret="";
        for(int i=0; i<patt.length(); i++){
            for(int j=0; j<S.length(); j++){
                if(S.charAt(j)==patt.charAt(i) && index>j){
                    ret=Character.toString(patt.charAt(i));
                    index=j;
                }
            }
        }
        if(ret.length()==0) return "$";
        return ret;

        // you don't need to print anything
    }
}
