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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        //Reversing the list:

        ListNode* next = nullptr;
        ListNode* prev = nullptr;
        ListNode* curr = l1;
        ListNode* head = l1;
        ListNode * reversel1 = nullptr;
        ListNode * reversel2 = nullptr;

        while(curr != nullptr){
            next = curr -> next;
            curr -> next = prev;
            prev= curr;
            curr =  next;
        }

        reversel1 = prev;

        next = nullptr;
        prev = nullptr;
        curr = l2;
        head = l2;

        while(curr != nullptr){
            next = curr -> next;
            curr -> next = prev;
            prev= curr;
            curr =  next;
        }

        reversel2 = prev;

        ListNode * ans = new ListNode(0);
        ListNode * ansHead = ans;

        bool carry = false;

        while(reversel1 != NULL && reversel2 != NULL){

           int currSum = reversel1 -> val + reversel2 -> val;

           if(carry){
               currSum = currSum + 1;
               carry = false;
           }
  
           if(currSum > 9){
               carry = true;
               currSum = currSum % 10;
           }

           ListNode * temp = new ListNode(currSum);
           ans -> next = temp;
           reversel1 = reversel1 -> next;
           reversel2 = reversel2 -> next;
           ans = ans -> next;

        }

        while(reversel1 != nullptr ){
            int currSum = reversel1 -> val;

            if(carry){
               currSum = currSum + 1;
               carry = false;
            }

            if(currSum > 9){
               carry = true;
               currSum = currSum % 10;
            }

           ListNode * temp = new ListNode(currSum);
           ans -> next = temp;
           reversel1 = reversel1 -> next;
           ans = ans -> next;
        }

        while(reversel2 != nullptr ){
            int currSum = reversel2 -> val;

            if(carry){
               currSum = currSum + 1;
               carry = false;
            }

            if(currSum > 9){
               carry = true;
               currSum = currSum % 10;
            }

           ListNode * temp = new ListNode(currSum);
           ans -> next = temp;
           reversel2 = reversel2 -> next;
           ans = ans -> next;
        }

        if(carry){
           ListNode * temp = new ListNode(1);
           ans -> next = temp;
           ans = ans -> next;
        }


        next = nullptr;
        prev = nullptr;
        curr = ansHead -> next;
        head = ansHead -> next;

        while(curr != nullptr){
            next = curr -> next;
            curr -> next = prev;
            prev= curr;
            curr =  next;
        }

        return prev;

    }
};