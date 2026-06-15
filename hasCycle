lass Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* tortoise= head;
        ListNode* rabbit= head;

        while(rabbit!=NULL && rabbit->next!=NULL){
            tortoise= tortoise->next;
            rabbit= rabbit->next->next;

            if(rabbit==tortoise){
                return true;
            }
        }
        return false;
    }
};
