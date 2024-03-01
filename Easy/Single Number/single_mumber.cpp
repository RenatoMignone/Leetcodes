#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

class Solution {
public:
    int singleNumber(vector<int>& nums) { 
    //unordered map è una hashmap
       unordered_map<int,int> a;

	   for(auto x: nums)
		   a[x]++;
           
	   for(auto z:a)
		   if(z.second==1)
			   return z.first;
	   return -1;
    }
};

int main(){
    Solution soluzione;
    vector<int> vettore = {2,2,3};

    int x = soluzione.singleNumber(vettore);

    cout << x;

    return 0;
}