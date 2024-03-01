class leet7_radice {
        public static int mySqrt(int x) {
            if (x == 0) return 0;
            int i = 1;
            while (i <= x){
                int sqr = i * i;
                if (sqr == x) {
                    return i;
                } else if (sqr > x || sqr < 0){
                    return --i;
                }
                i++;
            }
            return i;
        }

    public static void main(String args[]){
        int i = 1;
        System.out.println(mySqrt(i));
    }
}