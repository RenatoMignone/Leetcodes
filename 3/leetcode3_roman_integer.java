

public class leetcode3_roman_integer {
    public static int romanToInt(String s) {
        int num = 0;
        for (int i = 0; i < s.length(); i++) {
            int currentNumeral = getValue(s.charAt(i));
            
            if (i < s.length() - 1 && currentNumeral < getValue(s.charAt(i + 1))) {
                num -= currentNumeral; // Subtract if the current numeral is smaller than the next one
            } else {
                num += currentNumeral; // Add its value otherwise
            }
        }
        return num;
    }

    private static int getValue(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    public static void main(String args[]){
        String romano = "III";
        System.out.println(romanToInt(romano));
    }
}
