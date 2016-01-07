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
    bool isSameTree(TreeNode* p, TreeNode* q) {                                  
      return TraTree(p,q);                                                        
    }
    
    
    bool TraTree(TreeNode *p,TreeNode *q)                            //����һ�������������ĵݹ麯��
    {   if(p==NULL&&q==NULL)return true;                             //����Ϊ���ڵ��򷵻���
        if(p!=NULL&&q!=NULL&&p->val==q->val)                         //�жϽڵ��ֵ��ȣ��Ҳ�Ϊ��
        return (TraTree(p->left,q->left)&&TraTree(p->right,q->right));  //�Խڵ�������������б���
      else
        return false;
        
    }
    
};