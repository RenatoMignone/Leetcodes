#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
        while(i!=-1){
            if(digits[i]!=9){
                digits[i] = digits[i]+1;
                return digits;
            }
            // cout << digits[i];
            digits[i] = 0;
            // digits[i-1] = digits[i-1]+1;
            i--;
        }
        if(digits[0]==0){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};

int main(){
    Solution soluzione; 
    vector vettore = {1,9,9};

    vector result = soluzione.plusOne(vettore);

    for(auto x : result){
        cout << x;
    }
}