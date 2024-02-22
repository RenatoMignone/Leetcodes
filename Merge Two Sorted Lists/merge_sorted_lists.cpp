#include <iostream>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL )
        {
            return list2;
        }
        if(list2==NULL )
        {
            return list1;
        }
        ListNode* dummy=new ListNode();
        ListNode*temp=dummy;
        while(list1&&list2)
        {
          if(list1->val<list2->val)
          {
            temp->next=list1;
            list1=list1->next;
          }
          else{
            temp->next=list2;
            list2=list2->next;
          }
          temp=temp->next;
        }
        if(list1) temp->next = list1;
        if(list2) temp->next = list2;
        return dummy->next;
    }
};

int main(){
    
    ListNode node2(4);
    ListNode node1(2,&node2);
    ListNode node0(1,&node1);

    ListNode node5(4);
    ListNode node4(3,&node5);
    ListNode node3(1,&node4);

    Solution soluzione;
    ListNode* result = soluzione.mergeTwoLists(&node0,&node3);

    while(result->next!=nullptr){
        cout << result->val << endl;
    }

}