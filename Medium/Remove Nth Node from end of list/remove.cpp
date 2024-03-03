#include <iostream>
#include "ListNode.h"
using namespace std;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
    }
};

int main(){
    Solution soluzione;

    ListNode nodo1(7);
    ListNode nodo2(6,&nodo1);
    ListNode nodo3(5,&nodo2);
    ListNode nodo4(4,&nodo3);
    ListNode nodo5(3,&nodo4);
    ListNode nodo6(2,&nodo5);
    ListNode nodo7(1,&nodo6);


    ListNode* sol = soluzione.removeNthFromEnd(&nodo7,1);

    for(int i=0;i<=3;i++){
        cout << sol->val;
        sol = sol->next;
    }
}