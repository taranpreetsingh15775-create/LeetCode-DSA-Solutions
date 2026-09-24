class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* newHead = head->next;   
        ListNode* prev = nullptr;         
        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {
            ListNode* curr1 = curr->next;
            ListNode* nextPair = curr1->next;   

            curr1->next = curr;      
            curr->next = nextPair;

            if (prev != nullptr) {
                prev->next = curr1;  
            }

            prev = curr;       
            curr = nextPair;   
        }

        return newHead;
    }
};