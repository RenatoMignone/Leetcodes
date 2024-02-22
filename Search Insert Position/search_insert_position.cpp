#include <iostream>
#include <vector>
using namespace std;

//for the solution in this case we have used the binary search algorithm, used to find a value in a sorted array
//thanks to this method we have a complecity equals to O(log(n))

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//        int low=0;
//        int high = nums.size()-1;
//        int mid=0;
//        while(low<=high){
//            mid=(low+high)/2;
//            if(nums[mid]==target){
//                return mid;
//            }
//            else if(nums[mid]>target){
//                high=mid-1;
//            }
//            else
//            low=mid+1;
//        } 
//        return high+1;
//     }
// };

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int m = (l + r) / 2;

            if (nums[m] < target) {
                l = m + 1;
            } else if (nums[m] > target) {
                r = m - 1;
            } else {
                return m;
            }
        }

        return l;
    }
};

int main(){
    Solution soluzione;

    vector<int> vettore = {1,2,3};

    cout << soluzione.searchInsert(vettore,4);
}