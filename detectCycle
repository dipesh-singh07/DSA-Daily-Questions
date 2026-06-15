class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* tortoise= head;
        ListNode* rabbit= head;

        while(rabbit!=NULL && rabbit->next!= NULL){
            tortoise= tortoise->next;
            rabbit= rabbit->next->next;

            if(tortoise==rabbit){
                ListNode* start= head;

                while(start!=tortoise){
                    start= start->next;
                    tortoise= tortoise->next;
                }
                return start;
            }
        }
        return NULL;
    }
};
