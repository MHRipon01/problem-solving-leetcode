//https://leetcode.com/problems/add-two-numbers/description/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* tail = head;
        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry != 0) {
            int digit1 = (l1 != NULL) ? l1->val : 0;
            int digit2 = (l2 != NULL) ? l2->val : 0;

            int sum = digit1 + digit2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode* newnode = new ListNode(digit);
            tail->next = newnode;
            tail = tail->next;

            l1 = (l1 != NULL) ? l1->next : NULL;
            l2 = (l2 != NULL) ? l2->next : NULL;
        }

        ListNode* result = head->next;
        delete head;
        return result;
    }
};