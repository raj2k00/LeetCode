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
    ListNode* partition(ListNode* head, int x) {

        ListNode * small = new ListNode();
        ListNode * large = new ListNode();

        ListNode * first = small;
        ListNode * second = large;

        while(head != nullptr){

            ListNode * temp = new ListNode(head -> val);

            if(head -> val < x){
                first -> next = temp;
                first = first -> next;
            }

            else{
                second -> next = temp;
                second = second -> next;
            }

            head = head -> next;

        }

        ListNode * start = small -> next;
        ListNode * end = large -> next;
        first -> next = end;

        if(start){
            return start;
        }

        
        return end;
        
    }
};