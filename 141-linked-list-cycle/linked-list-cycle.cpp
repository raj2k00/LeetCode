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
    bool hasCycle(ListNode *head) {
        if(!head || head -> next == nullptr) return false;

        ListNode *slow = head;
        ListNode *fast = head;

        slow = slow -> next;
        fast = fast -> next -> next;

        while(fast && fast -> next){
            if(slow == fast) return true;
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        return false;
    }
};