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
    ListNode* swapPairs(ListNode* head) {

        if(head == nullptr || head -> next == nullptr) return head;

        ListNode * prev = head;
        ListNode * curr = head -> next;

        // changing the head to second node
        head = curr; 

        while(true){
            // creating next node third pointer
            ListNode * next = curr -> next;

            // change the curr node next pointer to previous node
            curr -> next = prev;

            // if next is null or last node
            if(next == nullptr || next -> next == nullptr){
                prev -> next = next;
                break;
            }

            prev -> next = next -> next;

            // update the prev and curr
            prev = next;
            curr = prev -> next;
        }

        return head;
    }
};