lass Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current= head;
        ListNode* previous= NULL;
        while(current!= NULL){
            ListNode* nextNode= current->next;
            current->next= previous;
            previous= current;
            current= nextNode; 
        }
        return previous;
    }
    
};
