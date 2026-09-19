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

int maxHeight(TreeNode* root, int& Maxi){
     if(root == NULL){
            return 0;
        }

   int left = maxHeight(root->left, Maxi);
   int right = maxHeight(root->right,Maxi);

   Maxi = max(Maxi, left+right);

   return 1 + max(left,right);

}
    int diameterOfBinaryTree(TreeNode* root) {

        int Maxi = 0;

        maxHeight(root,Maxi);

        return Maxi;
    } 
};