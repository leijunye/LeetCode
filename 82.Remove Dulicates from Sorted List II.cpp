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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *a,*b,*c;                                //��������ListNodeָ��
        if(head==NULL||head->next==NULL)return head;      //��head��head��һ��ֵΪ����ֱ�ӷ���headָ��
        a=head;                                           //aָ��head
        b=a->next;                                        //bָ��head��һ���ڵ�
        ListNode *list=new ListNode(0);                   //�½�һ������listΪͷ�ڵ㣬ֵΪ0
        c=list;                                           //cָ���½����ı�list
        if(a->val!=b->val)                                
        {   ListNode *d=new ListNode(a->val);
            c->next=d;
            c=c->next;
                                                           /*�����ı�ĵ�һ���ڵ�ֵ��ڶ����ڵ�ֵ��ͬ�����½�һ���ڵ�
         }                                                      ֵ���ڵ�һ���ڵ��ֵ�������������У�Cָ����һ�ڵ� */
        while(b)
       {
           if(a->val==b->val)                             //��aָ���ֵ��bָ���ֵ��ȣ���bָ����һ����֪���ҵ���ͬ��Ϊֹ
             b=b->next;
           else{
               a=b;                                       //a��b��ֵ��ͬ��aָ��b��λ��
               b=b->next;                                 //b����ָ����һ��
               if(b!=NULL&&a->val!=b->val)                //������ͬ���½��ڵ㣬ֵΪa��val��������list��cָ����һ��
               { 
                 ListNode *e=new ListNode(a->val);
                 c->next=e;
                 c=c->next;
               }
           }
       }
       if(a->next==NULL)   c->next=a;                    //bΪ�պ�����ѭ������aĩ�ڵ㣬�����c
  
       else if(a->val!=a->next->val)      c->next=a;     //��a��Ϊĩ�ڵ�,��a����һ���ڵ�ֵ��a���ȣ����a����c
 
       
      return list->next;                                
    }
};