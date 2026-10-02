/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        ListNode* curr=head;
        ListNode* curr1=head;
        ListNode* prev=nullptr;

        if(head==nullptr || head->next==nullptr)
        return head;
        
        int len=1;
        
        while(curr!=nullptr && curr->next!=nullptr){
            curr=curr->next;
            len++;
        }

        if(len==0 || len==1)
        k=0;

        curr->next=head;

        if(k>=len){
            k=k%len;
        }
    

        int new1=len-k;

        while(new1!=0){
            prev=curr1;
            curr1=curr1->next;
            new1--;
        }
        prev->next=nullptr;
        return curr1;
    }
};