class Solution {
    public int myAtoi(String s) {
        // Your code here
        String s1=s.trim();
        StringBuilder sb = new StringBuilder();
        
        for(int i=0;i<s1.length();i++)
        {
            if((sb.length()>0 && sb.charAt(0)=='-' )&& s1.charAt(i)=='-')
            {
                continue;
            }
            else if(sb.length()==0 && s1.charAt(i)=='-')
            {
                sb.append('-');
                continue;
            }
            else if(!Character.isDigit(s1.charAt(i)) && (sb.length()==0
            || (sb.length()==1 && sb.charAt(0)=='-')) )
                return 0;
                
            else
            {
                if(Character.isDigit(s1.charAt(i))) 
                {
                    sb.append(s1.charAt(i));
                }
                if(!Character.isDigit(s1.charAt(i))) 
                {
                   break;
                }
            }
            
            
                
        }
        try{
        int a= Integer.parseInt(sb.toString());
        
        return a;
        }
        catch(NumberFormatException e)
        {
            if(sb.charAt(0)=='-' && sb.length()>1)
                return Integer.MIN_VALUE;
            if(sb.charAt(0)!='-' && sb.length()>10)
                return Integer.MAX_VALUE;
        }
     return 0;


    }
}