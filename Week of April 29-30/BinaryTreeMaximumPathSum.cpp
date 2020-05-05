/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/532/w/eek-5/3314
*/

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
     int maxPath(TreeNode* root,int& h) {
        if (root==NULL)
            return INT_MIN;
         int h1=INT_MIN;
         int h2=INT_MIN;
         int d1=maxPath(root->left,h1);
        int d2=maxPath(root->right,h2);
        
         h=max({h1,h2,0})+root->val;
         return max({d1,d2,max(h1,0)+max(h2,0)+root->val});
        /*int l=maxPath(root->left,res);
        int r=maxPath(root->right,res);
        
        int temp=max(max(l,r)+root->val,root->val);
        int ans =max(temp,l+r+root->val);
        res=max(res,ans);
        return temp;*/
    }
    int maxPathSum(TreeNode* root) {
    int h=INT_MIN;
         return maxPath(root,h);
    }
};
