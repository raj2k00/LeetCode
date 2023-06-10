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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == nullptr && list2 == nullptr) return nullptr;

        ListNode * head = new ListNode();
        ListNode * current = head;

        while(list1 != NULL && list2 != NULL){

            if(list1 -> val < list2 -> val){
                ListNode * newNode = new ListNode(list1 -> val);
                current -> next = newNode;
                current = current -> next;
                list1 = list1 -> next;
            }

            else if(list2 -> val < list1 -> val){
                ListNode * newNode = new ListNode(list2 -> val);
                current -> next = newNode;
                current = current -> next;
                list2 = list2 -> next;
            }

            else{
                ListNode * newNode = new ListNode(list1 -> val);
                current -> next = newNode;
                current = current -> next;
                ListNode * neNode = new ListNode(list2 -> val);
                current -> next = neNode;
                current = current -> next;
                list1 = list1 -> next;
                list2 = list2 -> next;
            }

        }

        while(list1 != NULL ){
            ListNode * newNode = new ListNode(list1 -> val);
            current -> next = newNode;
            current = current -> next;
            list1 = list1 -> next;
        }


        while(list2 != NULL ){
            ListNode * newNode = new ListNode(list2 -> val);
            current -> next = newNode;
            current = current -> next;
            list2 = list2 -> next;
        }

        return head -> next;
        
    }
};