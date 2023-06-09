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
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL || head -> next == NULL){
            return NULL;
        }

        ListNode * slow = head;
        ListNode * fast = head;

        slow = slow -> next;
        fast = fast -> next -> next;

        while(fast && fast -> next){
            if(slow == fast){
                break;
            }
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        if(slow == fast){

            slow = head;

            if(fast == slow ){
                while(fast -> next != slow){
                    fast = fast -> next;
                }
            }else{
                while(fast -> next != slow -> next){
                    fast = fast -> next;
                    slow = slow -> next;
                }
            }

            return fast -> next;
        }

        return NULL;

    }
};