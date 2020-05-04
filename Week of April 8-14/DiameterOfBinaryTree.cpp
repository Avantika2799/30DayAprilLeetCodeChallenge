/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/529/week-2/3293/
*/

//In Binary Tree No. of nodes=no. of edges + 1(as they are no cycles in tree DS)
//we are going to make a function in which we get
the maximum of
//the height of the left subtree 
//the height of right subtree
// sum of both the left and right (deepest we can go in left and right subtrees)


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int h=0;
        return height(root,h);
    }
    
int height(TreeNode * root,int &h)
{
    if(!root){
    h=0;
        return 0;
        }
        int lef_h=0,righ_h=0;
   int l_diameter = height(root->left,lef_h);
   int r_diameter = height(root->right,righ_h);
   
   h=max(lef_h,righ_h)+1; //number of nodes
   
   return max({ l_diameter, r_diameter, lef_h+righ_h });
}

};
