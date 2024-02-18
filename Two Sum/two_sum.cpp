#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector soluzione={0,0};
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(j!=i){
                    if(nums[i]+nums[j] == target){
                    soluzione[1] = i;
                    soluzione[0] = j;
                    return soluzione;
                    }
                } 
            }
        }
        return soluzione;
    }
};

int main(){
    vector vettore = {3,2,4};

    Solution soluzione;
    vector soluz= soluzione.twoSum(vettore,6);
    for(auto x:soluz){
        cout << "\n" << x;
    }

}