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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)return false;                  //�����ڵ�Ϊ�����˳�����

        return PreOrder(root,sum);                  //������������ݹ麯��
    }
    bool PreOrder(TreeNode *head,int sum)
    {   if(head==NULL)return false;                     //�����ڵ�Ϊ���򷵻ؼ�
        
        if(head->left==NULL&&head->right==NULL&&sum-head->val==0)return true; //�����ڵ�ΪҶ�ӽڵ㣬��SUM��ȥVAL��ֵ��ǡ��Ϊ0���򷵻���
       
        return (PreOrder(head->left,sum-head->val)||PreOrder(head->right,sum-head->val));//���ڵ㻹����������������������õݹ麯����SUM��ȥ�ýڵ��VALֵ
        
       
    }
};