#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string parola = to_string(x);
        for(int i = 0; i<parola.length()/2;i++){
            if(parola[i]!=parola[parola.length()-1-i]){
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution solution;
    cout << solution.isPalindrome(1221);
}