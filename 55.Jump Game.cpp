class Solution {
public:
    bool canJump(vector<int>& nums) {
       if(nums.size()==1)return true;               //��NUMS�ĳ���Ϊ1�򷵻���
       int i=0,max=0;                               //��������int�ͱ���i,max��max��¼�����Ծ����,i��¼����λ��
       while(i<=max&&i<nums.size()-1)               
       {
           if(i+nums[i]>max)                        //�ж���i��λ���ϼ���nums[i]����Ծ�����Ƿ����max����������Ӻ󸳸�max
              max=i+nums[i];
           i++;                                     
       }
       if(max>=nums.size()-1)return true;           //�ж�������Ծ�����ܷ���ڻ����NUMS�ĳ��ȣ��������򷵻���
       else return false;
    }
};