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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = 0;
        ListNode* curr = head;
        while (curr != nullptr) {
            l++;
            curr = curr->next;
        }

        int s = l - n;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* curr1 = &dummy;

        for (int i = 0; i < s; i++) {
            curr1 = curr1->next;
        }

        curr1->next = curr1->next->next;

        return dummy.next;
    }
};