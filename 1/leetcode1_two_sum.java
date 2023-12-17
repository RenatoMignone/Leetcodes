import java.util.Arrays;

public class leetcode1_two_sum {
    public static int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return new int[]{i, j};
                }
            }
        }
        return new int[]{}; // No solution found
    }

    public static void main (String argv[]){
        int[] nums = new int[]{2,7,11,15};
        int target = 9;
        int[] index = new int[]{};
        index = twoSum(nums,target);

        System.out.println(Arrays.toString(index));
    }
}
