class GfG {

    public static ArrayList<String> findMatchedWords(int n, ArrayList<String> dict,String pattern) {
        ArrayList<String> res=new ArrayList<>();
        for(String str:dict){
            if(pattern(str,pattern)) res.add(str);
        }
        return res;
        
    }
    static boolean pattern(String str1,String str2){
            int[] freq1=new int[256];
            int[] freq2=new int[256];
            if( str1.length()!=str2.length()) return false;
            for(int i=0;i<str1.length();i++){
                if(freq1[str1.charAt(i)]!=freq2[str2.charAt(i)]){
                    return false;
                }
                freq1[str1.charAt(i)]=i+1;
                freq2[str2.charAt(i)]=i+1;
            }
            return true;
    }
}

