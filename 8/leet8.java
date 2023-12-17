import java.util.Stack;
import java.lang.StringBuilder;

public class leet8 {
    public static int reverseBits(int n){
        String numero = Integer.toString(n);
        StringBuilder builder = new StringBuilder(numero);
        return Integer.parseInt(builder.reverse().toString(),2);
    }

    public static void main(String[] argv){
        int x = 1101010;
        System.out.println(reverseBits(x));
    }   
}
