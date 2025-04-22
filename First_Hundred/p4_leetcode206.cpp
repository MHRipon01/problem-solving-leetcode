//https://leetcode.com/problems/reverse-linked-list/description/
class Solution {
    void reverse(ListNode*& head, ListNode* tmp) {

        if (tmp->next == NULL) {
            head = tmp;
            return;
        }

        reverse(head, tmp->next);
        tmp->next->next = tmp;
        tmp->next = NULL;
    }

public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return head;
        }
        reverse(head, head);
        return head;
    }
};