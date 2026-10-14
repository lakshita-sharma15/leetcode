
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        if (count == n) {
            ListNode* newhead = head->next;
            delete head;
            return newhead;
        }

        temp = head;

        for (int i = 1; i < count - n; i++) {
            temp = temp->next;
        }

        ListNode* deleteNode = temp->next;
        temp->next = deleteNode->next;
        delete deleteNode;

        return head;
    }
};
