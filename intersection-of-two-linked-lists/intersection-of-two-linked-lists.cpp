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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        unordered_map <ListNode* , ListNode*> hash;

        ListNode* first = headA;
        ListNode* second = headB;

        while(first != nullptr){
            hash.insert(make_pair(first, first));
            first = first -> next;
        }

        while(second != nullptr){
            if(hash[second] != 0) return second;
            second = second -> next;
        }

        return nullptr;

    }
};