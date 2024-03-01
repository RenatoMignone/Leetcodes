public class leetcode2_palindrome {
        public static boolean isPalindrome(int x) {

            char caratteri[] = String.valueOf(x).toCharArray();
            char capovolti[] = new char[caratteri.length];
            int i = caratteri.length-1;

            for(char carattere : caratteri){
                capovolti[i] = carattere;
                i--;
                
                if(new String(caratteri).equals(new String(capovolti))){
                    return true;
                }
            }
            return false;
        }
        
        public static void main(String args[]){
            int number = -121;
            System.out.println(isPalindrome(number));
        }
}
