
class Solution {
public:
    bool isPalindrome(ListNode* head) {
     
     if(head == NULL && head->next == NULL){
        return true;
     }
     ListNode* slow = head;
     ListNode* fast = head;

     // find middle of linkedlist

     while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
     }
     
     //reverse half

     ListNode* curr = slow;
     ListNode* prev = NULL;
     ListNode* next = NULL;
     while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
     }
     
     // check is pelindrom or not
     ListNode* first = head;
     ListNode* second = prev;

     while(second != NULL){
        if(first->val != second->val){
            return false;
        }
        first = first->next;
        second = second->next;
     }
     return true;

    }
};