/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        
        int sum = 0;
        
        queue <TreeNode*> q;

        q.push(root);

        while(!q.empty()){

            TreeNode * curr = q.front();

            q.pop();

            if(curr -> left){
                if(curr -> left -> left == nullptr && curr -> left -> right == nullptr){
                    sum += curr -> left ->  val;
                }else{
                    q.push(curr -> left);
                }
            }

            if(curr -> right){
                q.push(curr -> right);
            }

        }

        return sum;
        
    }
};