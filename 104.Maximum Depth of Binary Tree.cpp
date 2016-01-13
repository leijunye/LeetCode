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
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;               //���ڵ�Ϊ���򷵻�0
        int l��r;                          //��������int��l,r��l��¼����������ȣ�r��¼�����������
        l=maxDepth(root->left);           //�õݹ��㷨����������
        r=maxDepth(root->right);          //����������
        
        return 1+max(l,r);                //�Ƚ�������������������ȣ������ظ����ֵ
    }
};