#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int result = 0;
        if(n%2){
            int i = (n/2)-1;
            for(i;i>1;i--){
                result += i*2;
                result += (n-(i*2))*2;
            }
            return result + 1 + (n/2) + n;
        }
        else{
            
        }
        return 0;

    }
};

int main(){

    Solution soluzione;
    cout << soluzione.climbStairs(9);
}