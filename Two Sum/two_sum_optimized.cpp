#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        //i define a loop without an end cuz i am gonna return a value and end the function before
        for (int i = 0;; ++i) {
            int x = nums[i];
            int y = target - x;

            //using the count method i can check if the value exists as a key in the hashmap
            if (m.count(y)) {
                return {m[y], i};
            }
            m[x] = i;
        }
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