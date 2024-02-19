#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int value;
        for (int i = 0; i<s.size();i++){
            switch (s[i])
            {
            case "M":
                value = 1000;
                break;
            
            default:
                break;
            }
        }
    }
};

int main(){
    string parola = "XVI";
    Solution soluzione;
    cout << soluzione.romanToInt(parola);
}