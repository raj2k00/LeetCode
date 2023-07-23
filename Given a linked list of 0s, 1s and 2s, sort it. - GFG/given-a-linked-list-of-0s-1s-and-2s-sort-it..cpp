//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // nodes;
        
        Node * Zero = new Node(0);
        Node * One = new Node(0);
        Node * Two = new Node(0);
        
        Node * zero = Zero;
        Node * one = One;
        Node * two = Two;
        
        Node * curr = head;
        
        while(curr != NULL){
            if(curr -> data == 0){
                Node * temp = new Node(0);
                zero -> next = temp;
                zero = zero -> next;
            }
            curr = curr -> next;
        }
        
        Node * oneCurr = head;
        
        while(oneCurr != NULL){
            if(oneCurr -> data == 1){
                Node * temp = new Node(1);
                one  -> next = temp;
                one = one -> next;
            }
            
            oneCurr = oneCurr -> next;
        }
        
        Node * twoCurr = head;
        
        while(twoCurr != NULL){
            if(twoCurr -> data == 2){
                Node * temp = new Node(2);
                two  -> next = temp;
                two = two -> next;
            }
            
            twoCurr = twoCurr -> next;
        }
        
        // merge Nodes;
        
        zero -> next = One -> next != NULL ? One -> next : Two -> next;
        
        one -> next = Two -> next; 
        
        return Zero -> next;
        
        
        
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends