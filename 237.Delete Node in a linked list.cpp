/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;    //����һ�ڵ��ֵ������Ӧ�ڵ��ֵ
        ListNode *a = node->next;       //�½�ListNoded���͵�ָ��a��ָ��node����һ���ڵ�
        node->next = a->next;           
        delete a;                       //ɾ��a��������Ͽ�
        
    }
};