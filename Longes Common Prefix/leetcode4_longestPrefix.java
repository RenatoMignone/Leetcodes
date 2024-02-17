import java.util.ArrayList;
import java.util.stream.Collectors;


class longestPrefix {
    public static String longestCommonPrefix(String[] strs) {
        ArrayList<Character> prefix = new ArrayList<>(){};
        char[] chars = strs[0].toCharArray();

        for(int i=0;i<chars.length;i++){
            for(String string:strs){
                if(isThere(string, chars[i], i)){
                }
                else{
                    return prefix.stream().map(String::valueOf).collect(Collectors.joining());
                }
            }
            prefix.add(chars[i]);
        }
        return prefix.stream().map(String::valueOf).collect(Collectors.joining());
    }

    private static boolean isThere(String s,char c,int i){
        if(i>s.length()-1){
            return false;
        }
        if(s.charAt(i)==c){
            return true;
        }
        return false;
    }

    public static void main(String args[]){
        String[] parole = new String[]{"ab","a"};
        System.out.println(longestCommonPrefix(parole));
    }
}