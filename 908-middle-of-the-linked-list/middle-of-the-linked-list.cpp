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
    ListNode* middleNode(ListNode* head) {
        int count = 0;

        ListNode * first = head;

        while(first -> next){
            count++;
            first = first -> next;
        }

        int middle ;

        if(count % 2 == 0){
            middle = (count / 2);
        }else{
            middle = count / 2  + 1;
        }

        while(middle > 0){
            head = head -> next;
            middle--;
        }

        return head;

    }
};