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
    bool isPalindrome(ListNode* head) {

        if(head == nullptr) return false;
        if(head -> next == nullptr) return true;

        string first = "";

        while(head){
            first += to_string(head -> val);
            head = head -> next;
        }

        int n = first.size();

        for (int i = 0; i < n / 2; i++){
            if(first[i] != first[n - i - 1]) return false;
        }
        
        return true;
        
    }
};