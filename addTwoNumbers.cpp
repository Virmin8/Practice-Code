#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){


    
}

int main(){

    ListNode* value3list1 = new ListNode(3);
    ListNode* value2list1 = new ListNode(4,value3list1);
    ListNode* valuelist1 = new ListNode(2,value2list1);


    return 0;
}