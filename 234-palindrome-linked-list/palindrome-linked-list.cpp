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
    bool isPalindrome(ListNode* head) {
        //finding element
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* mid = head;
        if(head->next == NULL) return true;

        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(!(fast && fast->next)){
                mid = slow;
            }
        }
        // cout<< mid->val;
        //reversing the list
        ListNode* prev = NULL;
        ListNode* curr= mid;
        ListNode* forward = NULL;

        while(mid != NULL){
            forward = mid->next;
            mid->next = prev;
            prev = mid;
            mid = forward;

        }
        cout<< prev->val;
        // prev is the reversed node
        ListNode* second = prev;
        
        bool is_palindrome = false;
        while(head!= NULL && second != NULL ){
            is_palindrome = true;
            if(head->val != second->val){
                is_palindrome = false;
                break;
            }
            head = head->next;
            second = second->next;
        }
        return is_palindrome;
    }
};