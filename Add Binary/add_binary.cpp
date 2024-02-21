#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
 public:
  string addBinary(string a, string b) {
    //declare the response
    string ans;
    //declare the carry
    int carry = 0;

    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
      if (i >= 0)
        carry += a[i--] - '0'; // this - '0' is a way to convert from a character to a string
      if (j >= 0)
        carry += b[j--] - '0';
    
      ans += carry % 2 + '0'; // stavolta uso + '0' per portare da un int a un char
      carry /= 2;
    }

    reverse(begin(ans), end(ans));
    return ans;
  }
};

int main(){

    Solution solution;

    string prima = "1111";
    string seconda = "1";

    cout << solution.addBinary(prima,seconda);

}