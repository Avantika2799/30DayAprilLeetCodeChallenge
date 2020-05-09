/*
https://leetcode.com/problems/check-if-a-string-is-a-valid-sequence-from-root-to-leaves-path-in-a-binary-tree/
*/

class Solution {
public:
bool isValidSequence(TreeNode* root, vector<int>&arr){
if(!root) return arr.size() == 0;
 return isValid(root,arr,0);
   }
   bool isValid(TreeNode* root, vector<int>&arr,int idx){
    if(root->val !=arr[ids]) return false;
    if(idx==arr.size()-1)
           return !root->left && !root->right;
     return((root->left && isValid(root->left,arr,idx+1))||
     (root->right &&  isValid(root->right,arr,idx+1)));
    }
    };
