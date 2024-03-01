#include <iostream>
#include <cstdint>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        while(n) {
            if(n & 1) cnt++;
            //now i right shift the bit of one bit to right
            n = n >> 1;
        }
        return cnt;
    }
};

int main(){
    Solution soluzione;

    uint32_t number = 00000000000000000000000000001011;

    cout << soluzione.hammingWeight(number);

}