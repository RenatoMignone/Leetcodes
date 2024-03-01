#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        string str;
        for(int i=0;i<haystack.size();i++)
        {
            if(needle[0] == haystack[i])
            {
                str = haystack.substr(i,n);
                if(needle == str)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};

int main(){
    string frist = "ciao";
    string subs = "ao";

    Solution solution;
    cout << solution.strStr(frist,subs);
}