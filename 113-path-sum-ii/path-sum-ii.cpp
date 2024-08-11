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
    void solve(TreeNode* root, int sum, vector<int>v, vector<vector<int>>&ans, int targetSum){
        //base case
        if(root == NULL){
            return;
        }
        sum += root->val;
        v.push_back(root->val);
        if(root->left == NULL && root->right == NULL){
            if(sum == targetSum){
                ans.push_back(v);
                return;
            }
            else{
                return;
            }
        }
        solve(root->left, sum, v, ans, targetSum);
        solve(root->right, sum, v, ans, targetSum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        if(root == NULL){
            return ans;
        }
        vector<int>v;
        int sum = 0;
        solve(root, sum, v, ans, targetSum);
        return ans;
    }
};