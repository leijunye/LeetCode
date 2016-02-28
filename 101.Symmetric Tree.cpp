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
    bool isSymmetric(TreeNode* root) {
        stack<TreeNode* > a;            //��¼�����������������   
        stack<TreeNode* > b;            //��¼����������a�෴����
        if(root==NULL)return true;      
        b.push(root->left);             //�ø��ڵ���Ҷ�ӽڵ��ջ
        a.push(root->right);            //�ø��ڵ���Ҷ�ӽڵ��ջ
        while (a.size() > 0 && b.size() > 0){
            TreeNode* left = a.top();         //�õ�aջͷ�ڵ�
            TreeNode* right = b.top();        //�õ�bջͷ�ڵ�
            a.pop();    //����ͷ�ڵ��ջ
            b.pop();    //ͬ��
            if(left == NULL && right == NULL) continue;//�����Ҷ�Ϊ������ͬ��ִ��continue��
            if(left == NULL || right == NULL) return false;//����һ��Ϊ�գ���ͬ��ֱ�ӷ���false��
            if(left->val == right->val) {                  //��ֵ��ȣ���Ѹýڵ������Ҷ�ӽ�ջ��ע��a,b�Ľ�ջ˳���෴
                a.push(left->right);
                a.push(left->left);
                b.push(right->left);
                b.push(right->right);
            }else{
                return false;
            }
        }
        return true;

    }
};