/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* s=head;
        ListNode* f=head;

        do{
            if (f==nullptr || f->next==nullptr){
                return nullptr;
            }
            s=s->next;
            f=f->next->next;
        }while(s!=f );

        ListNode* curr1=s;
        ListNode* curr=head;

        while(curr1!=curr){
            curr1=curr1->next;
            curr=curr->next;
        }return curr;


        

    }
};