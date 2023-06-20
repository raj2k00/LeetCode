/**
 * Definition for singly-linked list->
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
    ListNode* insertionSortList(ListNode* head) {

     ListNode* dummy = new ListNode(0);
     ListNode* prev = dummy;
     ListNode* next = nullptr;

    while (head != nullptr) {
        next = head->next;

        if (prev->val > head->val) prev = dummy;

        while (prev->next != nullptr && prev->next->val < head->val) {
            prev = prev->next;
        }
        
        head->next = prev->next;
        prev->next = head;
        head = next;
    }
    return dummy->next;
        
    }
};