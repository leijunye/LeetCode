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
    TreeNode* invertTree(TreeNode* root) {
     if(root==NULL) return root;                //��rootΪ����ֱ�ӷ���
     exchangetree(root);
     return root;
  }
    
    void exchangetree(TreeNode* root) 
    {   TreeNode *t;
        if(root!=NULL)                     
          if(root->left!=NULL||root->right!=NULL)         //������������Ϊ�գ��򽻻�����������λ��
            {
                t=root->left;
                root->left=root->right;
                root->right=t;
                exchangetree(root->right);                //�ݹ����������
                exchangetree(root->left);                 //�ݹ����������
            }
        
    }
};