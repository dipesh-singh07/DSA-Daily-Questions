class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* tortoise= head;
        ListNode* rabbit= head;
        while(rabbit!= NULL && rabbit->next!= NULL){
            tortoise= tortoise->next;
            rabbit= rabbit->next->next;
        }
        return tortoise;
        
    }
};
