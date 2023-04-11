class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode* temp=head;

        while(temp!=0){
            temp=temp->next;
            n++;
        }

        n=n/2;
        temp=head;
        
        while(n--){
            temp=temp->next;
        }
        return temp;
    }
};
