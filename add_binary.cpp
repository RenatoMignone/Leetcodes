#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        stack<int> stack;
        bool resto = false;
        for(int i = 0;i<a.size();i++){
            int current = a[i] - '0';
            int to_add = b[i] - '0'; 
            if(to_add == 0 && resto==false){
                stack.push(current);
                continue;
            }
            if(current==1 && resto == true && to_add == 0){
                stack.push(0);
                resto = false;
                continue;
            }
            if(current == 1 && resto == true && to_add == 1){
                stack.push(1);
                resto = true;
                continue;
            }
        }
        for()
    }
};

int main(){

    Solution solution;

    string prima = "11";
    string seconda = "1";

    solution.addBinary(prima,seconda);

}