class Solution {
public:
    void deleteNode(ListNode* node) {
        while (node->next->next != 0){
            node->val=node->next->val;
            node=node->next;
        }
        node->val=node->next->val;
        node->next=NULL;
    }
};
