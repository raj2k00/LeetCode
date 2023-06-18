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

        if(head -> next == nullptr) return true;

        ListNode * slow = head;
        ListNode * fast = head;

        while(fast != nullptr && fast -> next != nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        fast = head;

        ListNode * prev = nullptr;
        ListNode * next = nullptr;
        ListNode * curr = slow;

        while(curr != nullptr){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }

        slow = prev;

        while(fast != nullptr && slow != nullptr){
            if(fast -> val != slow -> val) return false;
            fast = fast -> next;
            slow = slow -> next;
        }

        return true;
        
    }
};






