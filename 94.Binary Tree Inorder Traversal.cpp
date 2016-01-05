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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> a;                                      //����vector��¼��������Ľ��
        TreeNode *p;                                        //����TreeNode���͵�ָ�룬���ڱ���������
        stack<TreeNode*> b;                                 //����TreeNode*���͵�ջ�����ڼ�¼��������ĸ��ڵ�
        p=root;
        if (p == NULL) return a;                            //��������Ϊ�գ��򷵻�a
        while(p||!b.empty())                                //��bջ��Ϊ�ջ���p��Ϊ��ʱִ��ѭ��
        {
            while(p)                                        //��p��Ϊ���ǣ�ִ��ѭ����ֱ���ҵ������Ҷ�ӽڵ�
            {
                b.push(p);                                  //�Ѹ��ڵ����ջ��
                p=p->left;
            }
            p=b.top();                                      //��ջ��ջ��ֵ����p
            b.pop();                                        //ȥ��һ��ջ������¼�ĸ��ڵ�
            a.push_back(p->val);                            //��pָ���ֵ����vector����a
            p=p->right;                                     //pָ���ҽڵ�
        }
        return a;
    }
};