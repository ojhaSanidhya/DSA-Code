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
    bool solve(TreeNode* root, int sum, int targetSum){
        //base case
        if(root == NULL){
            return false;
        }
        sum += root->val;
        if(root->left == NULL && root->right == NULL){
            if(sum == targetSum){
                return true;
            }
            else{
                return false;
            }
        }
        bool left = solve(root->left, sum, targetSum);
        bool right = solve(root->right, sum, targetSum);

        if(left || right){
            return true;
        }
        else{
            return false;
        }

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return false;
        }
        int sum = 0;
        bool ans = solve(root, sum, targetSum);
        return ans;
    }
};