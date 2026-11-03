
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        // Find the middle of the list
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Split the list into two halves
        ListNode* mid = slow->next;
        slow->next = nullptr;

        // Recursively sort both halves
        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);

        // Merge the sorted halves
        return merge(left, right);
    }

    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (left != nullptr && right != nullptr) {
            if (left->val <= right->val) {
                tail->next = left;
                left = left->next;
            } else {
                tail->next = right;
                right = right->next;
            }
            tail = tail->next;
        }

        // Attach remaining nodes
        if (left != nullptr)
            tail->next = left;
        else
            tail->next = right;

        return dummy.next;
    }
};