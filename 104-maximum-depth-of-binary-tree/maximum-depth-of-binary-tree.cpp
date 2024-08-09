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
int levelOrderTraversal(TreeNode* root){
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    int count = 1;

    if(root == NULL){
        return 0;
    }

    //asli traversal start krete h 

    while(!q.empty()){
        if(q.front() == NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
                count++;
            }
        }
        else{
            //valid node wala case
            TreeNode* temp = q.front();
            q.pop();
            cout<<temp->val<<" ";

            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
    }
    return count;
}
    int maxDepth(TreeNode* root) {
        int count = levelOrderTraversal(root);
        return count;
    //base case
	// if(root == NULL ) {
	//     return 0;
	// }

	// int leftHeight = maxDepth(root->left);
	// int rightHeight = maxDepth(root->right);
	// int height = max(leftHeight, rightHeight) + 1;
	// return height;
    }
};