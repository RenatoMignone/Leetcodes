#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;
        int count=0;
        while(s[i]==' '){
            i--;
            count++;
        }
        while(i!=-1){
            if(s[i]==' '){
                return s.size()-1-i-count;
            }
            i--;
        }
        return s.size()-count;
    }
};

int main(){
    Solution soluzione;
    cout << soluzione.lengthOfLastWord("ad ");
}