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
    ListNode* reverseList(ListNode* head) {
        
        ListNode * curr = head;
        ListNode * prev = nullptr;
        ListNode * next = nullptr;

        while(curr != nullptr){
            next = curr -> next;     // store the next;
            curr -> next = prev;     // change the current pointer to previous
            prev = curr;             // update prev and curr;
            curr = next;
        }

        return prev;

    }
};