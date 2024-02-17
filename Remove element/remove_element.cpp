#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i=0;i<size(nums);i++){
            if(nums[i] == val){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return size(nums);
    }
};

int main(){
    vector<int> vector = {0,1,2,2,3,0,4,2};
    Solution solution;
    cout << solution.removeElement(vector,2);
}